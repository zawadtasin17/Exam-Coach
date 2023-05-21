#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"functions.h"
#include"scheduler.h"
#pragma warning(disable : 4996)

int nExams;

void examManager() {
    Exams* exam = NULL;
    readExam(&exam);
}

void readExam(Exams** exam) {
    int i = 0;
    int nlines = 1;
    nExams = 0;
    FILE* fp = fopen("exam.txt", "r");

    // Get number of exams
    while (!feof(fp)) {
        if (fgetc(fp) == '\n')
            nlines++;
    }
    nExams = nlines / 3;
    *exam = (Exams*)malloc(nExams * sizeof(Exams));

    // Read exams from file
    fseek(fp, 0, SEEK_SET);
    while (i < nExams) {
        fgets((*exam)[i].courseTitle, 100, fp);
        strtok((*exam)[i].courseTitle, "\n");
        fscanf(fp, "%d", &(*exam)[i].priority);
        fscanf(fp, "%d %d %d", &(*exam)[i].date[0], &(*exam)[i].date[1], &(*exam)[i].date[2]);
        fseek(fp, 2, SEEK_CUR);
        i++;
    }

    fclose(fp);
    displayExam(*exam);
}

void displayExam(Exams* exam) {
    char action;
    int sortMode;
    clear_screen();
    listExams(exam);
    printf("Press A to add an Exam/Assignment\n");
    if (nExams > 0) {
        printf("Press R to set a reminder\n");
        printf("Press V to delete a Task\n");
        printf("Press S to sort Tasks\n");
    }

    scanf(" %c", &action);
    getchar();
    switch (action) {
    case 'A':
    case 'a':
        addExams(exam, ++nExams);
        break;
    case 'V':
    case 'v':
        deleteExams(&exam);
        break;
    case 'R':
    case 'r':
        setReminder(exam);
        break;
    case 'S':
    case 's':
        printf("1) Sort by Priority\n");
        printf("2) Sort by Date\n");
        scanf("%d", &sortMode);
        if(sortMode == 1 ) sortExams(exam , nExams , 0 );
        else if (sortMode == 2) sortExams(exam, nExams, 1);
        break;
    default:
        printf("Invalid Command");
    }
}

void listExams(Exams* exam) {
    clear_screen();
    printf("\t\tList Of Upcoming Tasks\n\n");
    for (int i = 0; i < nExams; i++) {
        printf("%d- %s\n Priority: %d\n Date: %d/%d/%d\n\n\n", i + 1, exam[i].courseTitle, exam[i].priority, exam[i].date[0], exam[i].date[1], exam[i].date[2]);
    }
}


void addExams(Exams* exam, int n) {
    FILE* fp = fopen("exam.txt", "a");
    char* p;

    clear_screen();
    exam = (Exams*)realloc(exam, (n * sizeof(Exams)));

    printf("Course Title: ");
    fgets(exam[n - 1].courseTitle, 100, stdin);
    strtok(exam[n - 1].courseTitle, "\n");

    printf("Priority: \n");
    printf("\t\t1) Assignment\n");
    printf("\t\t2) Quiz\n");
    printf("\t\t3) Mid Exam\n");
    printf("\t\t4) Final Exam\n");
    scanf("%d", &exam[n - 1].priority);
    printf("Date (dd mm yyyy): ");
    scanf("%d %d %d", &exam[n-1].date[0], &exam[n - 1].date[1], &exam[n - 1].date[2]);
    getchar();
    fprintf(fp, "%s\n%d\n%d %d %d\n", exam[n - 1].courseTitle, exam[n - 1].priority, exam[n - 1].date[0] , exam[n - 1].date[1] , exam[n - 1].date[2]);
    fclose(fp);
    displayExam(exam);
}
void deleteExams(Exams** exam) {

    int n;
    FILE* fp = fopen("exam.txt", "w");
    clear_screen();
    listExams(*exam);
    printf("Select an exam to delete (press 0 to delete all)\n");
    scanf("%d", &n);
    //delete exam
    if (n == 0) {
        fclose(fp);
        nExams = 0;
        free(*exam);
        *exam = NULL;
    }
    else {
        for (int i = n - 1; i < nExams - 1; i++) {
            (*exam)[i] = (*exam)[i + 1];
        }
        nExams--;
        *exam = (Exams*)realloc(*exam, nExams * sizeof(Exams)); //reallocate memory

        //write modification in file
        for (int i = 0; i < nExams; i++) {
            fprintf(fp, "%s\n%d\n%d %d %d\n", (*exam)[i].courseTitle, (*exam)[i].priority, (*exam)[i].date[0], (*exam)[i].date[1], (*exam)[i].date[2]);
        }
        fclose(fp);
    }

    displayExam(*exam);
}


void setReminder(Exams* exam) {
    int taskIndex;
    clear_screen();
    listExams(exam);
    printf("Select a task to set a reminder for (enter the task index): ");
    scanf("%d", &taskIndex);

    // Check if the task index is valid
    if (taskIndex >= 1 && taskIndex <= nExams) {
        exam[taskIndex - 1].reminder = 1;
        printf("Reminder Set: %s\nPress Any Key to Continue\n", exam[taskIndex - 1].courseTitle);
        getchar();
    }
    else {
        printf("Invalid task index\n");
    }

    displayExam(exam);
}


void sortExams(Exams* exams, int length, int mode)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if ( (mode == 0 && exams[j].priority < exams[j + 1].priority) ||
                (mode == 1 && compareDates(exams[j].date, exams[j + 1].date)) )
            {
                // Swap exams[j] and exams[j+1]
                Exams temp = exams[j];
                exams[j] = exams[j + 1];
                exams[j + 1] = temp;
            }
        }
    }
    displayExam(exams);
}

int compareDates(int date1[3], int date2[3]) {
    // Compare the dates by converting them to a comparable value
    int value1 = date1[0] * 365 + date1[1] * 30 + date1[2];
    int value2 = date2[0] * 365 + date2[1] * 30 + date2[2];

    if (value1 < value2) {
        return 0;  // date2 is closer
    }
    else {
        return 1;  // date1 is closer or the same
    }
}