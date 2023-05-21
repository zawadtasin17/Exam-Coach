#pragma once
#include<time.h>

struct Exams {
    char courseTitle[100];
    int priority;
    int date[3];
    int reminder;
};
typedef struct Exams Exams;
void examManager();
void readExam(Exams*);
void displayExam(Exams*);
void listExams(Exams*);
void addExams(Exams*, int);
void deleteExams(Exams*);
void setReminder(Exams* todo);
int compareDates(int date1[3], int date2[3]);
void sortExams(Exams* exams, int length, int mode);