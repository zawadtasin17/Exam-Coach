#include<stdio.h>
#include<conio.h>
#include "chat.h"
#include"functions.h"


int main()
{
	main_menu();
}

int main_menu() {
	int operation;

	printf("\t\t----- EXAM COACH -----\n\n");
	printf("1) Practice Problems \n");
	printf("2) Quick Speed Mode \n");
	printf("3) Chat with Coach \n");
	printf("4) Progress Tracking \n");
	printf("5) Exit \n\n");

	scanf_s("%d", &operation);

	switch (operation)
	{
	case 1:
		//call function for problem solver(From Muntasir's code)
		system("cls");
		printf("This will open the problem solver page\n");
		break;
	case 2:
		//call function for quick practice mode (From Tasin's code)
		system("cls");
		printf("This will open the quick practice page\n");
		break;
	case 3:
		//call function for interactive chat with coach(Ibrahima's code)
		system("cls");
		chat();
		break;
	case 4:
		//call function for progress tracker
		system("cls");
		printf("This will open progress tracker");
		break;
	case 5:
		//exit app
		return -1;
		break;
	default:
		printf("invalid input");
	}
}
