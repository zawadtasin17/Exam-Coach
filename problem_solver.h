#pragma once
#pragma warning(disable : 4996)
#include<stdio.h>
int problem_solver();
int choose_department(int mode);
int choose_year(int mode , int dept);
int choose_course(int mode ,int year, int Dept);
int read_questions(FILE* question_file);

typedef struct Problem {
	char question[10000];
	char tip[2][10000];
	char answer[20000];
}Problem;
