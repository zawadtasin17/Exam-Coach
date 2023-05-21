#pragma once


#define MAX_LENGTH 10000
void quick_mode();
void menu();
void launch_game();
void view_scores();
typedef struct QUESTION {
    char statement[MAX_LENGTH];
    char answer_A[MAX_LENGTH];
    char answer_B[MAX_LENGTH];
    char answer_C[MAX_LENGTH];
    char answer_D[MAX_LENGTH];
    int correct_answer;
    char dummy[MAX_LENGTH];
}QUESTION;

