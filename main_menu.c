#include<stdio.h>
#include<conio.h>
#include "chat.h"
#include"functions.h"
#include"scheduler.h"
#include"problem_solver.h"

#pragma warning(disable : 4996)

int main()
{
	main_menu();
}

int main_menu() {
	int operation;
	int reminders = checkReminders();
	printf("\t\t----- EXAM COACH -----\n\n");
	if (reminders) printf("--You have %d Exams coming up(Check Exam scheduler)\n\n\n" , reminders );
	printf("1) Practice Problems \n");
	printf("2) Quick Speed Mode \n");
	printf("3) Exam Scheduler \n");
	printf("4) Chat with Coach \n");
	printf("5) Exit \n\n");

	scanf("%d", &operation);

	switch (operation)
	{
	case 1:
		clear_screen();
		problem_solver();
		break;
	case 2:
		clear_screen();
		quick_mode();
		break;
	case 3:
		clear_screen();
		examManager();
		break;
	case 4:
		
		clear_screen();
		chat();
		break;
	case 5:
		//exit app
		return -1;
		break;
	default:
		printf("invalid input");
	}
}

