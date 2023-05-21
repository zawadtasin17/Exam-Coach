#include "quick_practice.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
#include<time.h>
#pragma warning(disable : 4996)

void display_score_and_time(int score, int time_left)
{
    printf("Score: %d\tTime Left: %d seconds\n", score, time_left);
}

void quick_mode()
{
    menu();
}
void menu() {
    int action;

    printf("\tQuick Speed Mode\n\n"
        "1. Start\n"
        "2. Scores\n"
        "3. Main Menu\n");

    scanf("%d", &action);
    switch (action) {
    case 1: launch_game();
        break;
    case 2: view_scores();
        break;
    case 3: main_menu();
        break;
    }
}

void launch_game()
{
    FILE* fp;
    FILE* sp; //score file pointer
    int gameover = 0;
    int answer;
    int time_left;
    int score = 0, j;
    int difficulty;
    int high_scores[5];
    char dummy;
    QUESTION questions;

    clear_screen();

    printf("\tChoose Difficulty: \n\n"
        "1. Easy\n"
        "2. Medium\n"
        "3. Hard\n");

    scanf("%d", &difficulty);

    if (difficulty == 1) {
        time_left = 180;  // start time
        fp = fopen("resources/easy.txt", "r");
    }
    else if (difficulty == 2) {
        time_left = 120;  // start time
        fp = fopen("resources/medium.txt", "r");
    }
    else {
        time_left = 120;  // start time
        fp = fopen("resources/hard.txt", "r");
    }

    time_t start_time = time(NULL);
    while (!feof(fp) && time_left > 0) {
        clear_screen();
        display_score_and_time(score, time_left);

        // Load questions and answers
        fgets(questions.statement, MAX_LENGTH, fp);
        fgets(questions.answer_A, MAX_LENGTH, fp);
        fgets(questions.answer_B, MAX_LENGTH, fp);
        fgets(questions.answer_C, MAX_LENGTH, fp);
        fgets(questions.answer_D, MAX_LENGTH, fp);
        fscanf(fp, " Answer: %d", &questions.correct_answer);
        fgets(questions.dummy, MAX_LENGTH, fp); // little trick to set cursor to next line

        // Display questions and answers
        printf("%s", questions.statement);
        printf("%s", questions.answer_A);
        printf("%s", questions.answer_B);
        printf("%s", questions.answer_C);
        printf("%s", questions.answer_D);

        // Take input
        printf("\nChoose answer: ");
        scanf("%d", &answer);

        // Check if answer is correct
        if (answer == questions.correct_answer) score++;

        fflush(stdout);  // Flush the output buffer

        time_t current_time = time(NULL);
        int elapsed_time = (int)(current_time - start_time);
        time_left = time_left - elapsed_time;
    }

    fclose(fp);

    clear_screen();
    if (time_left > 0)
        printf("Congratulations!!!\n\n");
    else
        printf("TIME'S UP!!!\n");
    printf("Score: %d\n\n", score);
    printf("\t\t---Press Any Key To Continue---");
    scanf("%c", &dummy);
    scanf("%c", &dummy);



    //read HighScores
    sp = fopen("scores.txt", "r");

    for (int i = 0; i < 5; i++) {
        fscanf(sp, "%d", &high_scores[i]);
    }
    fclose(sp);

    //checking high score

    if (score > high_scores[4]) {
        for (int i = 0; i < 5; i++) {
            if (score > high_scores[i]) {
                for (int j = 4; j > i; j--) {
                    high_scores[j] = high_scores[j - 1];
                }
                high_scores[i] = score;
                break;  // Exit the loop once the new score is inserted
            }
        }



        // Write to score.txt file

        sp = fopen("scores.txt", "w");

        for (int i = 0; i < 5; i++)
        {
            fprintf(sp, "%d\n", high_scores[i]);
        }
        fclose(sp);

        main_menu();
    }
}
void view_scores() {
    int high_scores[5];
    FILE* sp; //score file pointer

    sp = fopen("scores.txt", "r");

    for (int i = 0; i < 5; i++) {
        fscanf(sp, "%d", &high_scores[i]);
    }
    fclose(sp);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", high_scores[i]);
    }

}