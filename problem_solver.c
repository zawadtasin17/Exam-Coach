#include<stdio.h>
#include<conio.h>
#include "problem_solver.h"

int problem_solver()
{
	int operation;
	printf("\t\t\tPROBLEM SOLVER\n\n\n");
	printf("\t\tChoose Your Option\n\n");
	printf("1.Comprehensive Problem \n");
	printf("2.Practice Problem \n");
	printf("3.Main Menu \n");

	scanf_s("%d", &operation);


	switch (operation)
	{
	case 1:
		//call the funtion for comprehensive problem
		system("cls");
		choose_department(1);
		break;
	case 2:
		//call function for practice problem
		system("cls");
		choose_department(2);
		break;

	case 3:
		//call function for returning main page
		system("cls");
		printf("This will open the main page again\n");
		break;
	}
}

int choose_department(int mode)
{
	int department;

	printf("\t\t\tChoose Department\n\n\n");
	printf("\t Option->\n\n");
	printf("1.CSE\n");
	printf("2.EEE\n");
	printf("3.MPE\n");
	printf("4.Back\n");

	scanf_s("%d", &department);


	switch (department)
	{
	case 1:
		//call the funtion for Cse Department
		system("cls");
		choose_year(mode,1);

		break;
	case 2:
		//call function for EEE Dept.
		system("cls");
		choose_year(mode , 2);
		break;

	case 3:
		//call function for MPE Dept.
		system("cls");
		choose_year(mode , 3);
		break;
	case 4:
		//call function for back to comprehensive problem
		system("cls");
		break;
	}


	return 1;
}
int choose_year(int mode , int dept)
{
	int year;

	printf("\t\t\tChoose Year\n\n\n");
	printf("Option->\n\n");
	printf("1. First Year.\n");
	printf("2. Second Year.\n");
	printf("3. Third Year.\n");
	printf("4. Fouth Year.\n");
	printf("5.Back\n");
	scanf_s("%d", &year);


	switch (year)
	{
	case 1:
		//call the funtion for 1st year
		system("cls");
		choose_course(mode , year, dept);
		break;
	case 2:
		//call function for 2nd year
		system("cls");
		choose_course(mode , year, dept);
		break;
	case 3:
		//call function for 3 year
		system("cls");
		choose_course(mode , year, dept);
		break;

	case 4:
		//call function for 4 th year
		system("cls");
		choose_course(mode , year, dept);
		break;
	case 5:
		//call function for back to comprehensive problem
		system("cls");
		printf("This will back to Department\n");
		break;
	}


	return 1;
}

int choose_course(int mode, int year, int Dept)
{
	int course;
	FILE* question_file = NULL;
	if (mode == 1)
	{
		if (Dept == 1)
		{
			//cse
			switch (year)
			{

			case 1:
				//call the funtion for 1st year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.CSE 4105:Computing For Engineering\n");
				printf("2.CSE 4107:Structured Programming I\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/CSE 4105_Computing For Engineering.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/CSE 4107_Structured Programming.txt", "r");
				}

				break;
			case 2:
				//call function for 2nd year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.CSE 4301:Object Oriented programming\n");
				printf("2.CSE 4303: Data Structure\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/CSE 4301_Object Oriented programming.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/CSE 4303_Data Structure.txt", "r");
				}
				break;
			case 3:
				//call function for 3 year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.CSE 4511: Computer Network\n");
				printf("2.CSE 4501: Operating Systems\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/CSE 4511_ Computer Network.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/CSE 4501_ Operating Systems.txt", "r");
				}
				break;

			case 4:
				//call function for 4 th year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.CSE 4703: Theory Of Computing\n");
				printf("2.CSE 4801: Compiler Design\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/CSE 4703_Theory Of Computing.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/CSE 4801_Compiler Design.txt", "r");
				}
				break;

			}
		}

		else if (Dept == 2)
		{
			//eee
			switch (year)
			{
			case 1:
				//call the funtion for 1st year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.EEE 4102: Basics Electrical Engineering\n");
				printf("2.PHY 4101: Physics I\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/EEE 4102_Basics Electrical Engineering.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PHY 4101_Physics.txt", "r");
				}
				break;
			case 2:
				//call function for 2nd year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.EEE 4302: Electronic Devices\n");
				printf("2.EEE 4307: Electrical Machine I\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/EEE 4302_Electronic Devices.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/EEE 4307_Electrical Machine.txt", "r");
				}
				break;
			case 3:
				//call function for 3 year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.EEE 4504: Digital Logic Design\n");
				printf("2.EEE 4501: Digital signal processing\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/EEE 4504_Digital Logic Design.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/EEE 4501_Digital signal processing.txt", "r");
				}
				break;

			case 4:
				//call function for 4 th year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.EEE 4702: Microprocessor And Embeded System\n");
				printf("2.EEE 4805: Power Station And Substation\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/EEE 4702_Microprocessor And Embeded System.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/EEE 4805_Power Station And Substation.txt", "r");
				}
				break;

			}
		}

		else
		{
			//mpe
			switch (year)
			{
			case 1:
				//call the funtion for 1st year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.MPE 4103: Engineering Machines \n");
				printf("2.PHY 4113: Structure Of Matter\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/MPE 4103_Engineering Machines.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PHY 4113_Structure Of Matter.txt", "r");
				}
				break;
			case 2:
				//call function for 2nd year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.MCE 4311: Fulid Meachanics I\n");
				printf("2.MCE 4305: Basic Thermodynamics\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/MPE 4311_Fulid Meachanics.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/MCE 4305_Basic Thermodynamics.txt", "r");
				}
				break;
			case 3:
				//call function for 3 year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.MCE 4503: Mechaincs Of Machines\n");
				printf("2.MCE 4511: Fluid Machinary\n");


				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/MCE 4503_Mechaincs Of Machines.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/MPE 4311_Fluid Meachanics.txt", "r");
				}
				break;

			case 4:
				//call function for 4 th year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.MCE 4705: Applied Thermodynamics\n");
				printf("2.MCE 4807: Machatronics\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/MCE 4705_Applied Thermodynamics.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/MCE 4807_Machatronics.txt", "r");
				}
				break;

			}

		}
	}
	else if (mode == 2)
	{
		int course;
		FILE* question_file = NULL;

		if (Dept == 1)
		{
			//cse
			switch (year)
			{

			case 1:
				//call the funtion for 1st year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_CSE 4105:Computing For Engineering\n");
				printf("2.PP_CSE 4107:Structured Programming I\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_CSE 4105_Computing For Engineering.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_CSE 4107_Structured Programming.txt", "r");
				}

				break;
			case 2:
				//call function for 2nd year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_CSE 4301:Object Oriented programming\n");
				printf("2.PP_CSE 4303: Data Structure\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/CSE 4301_Object Oriented programming.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_CSE 4303_Data Structure.txt", "r");
				}
				break;
			case 3:
				//call function for 3 year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_CSE 4511: Computer Network\n");
				printf("2.PP_CSE 4501: Operating Systems\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_CSE 4511_ Computer Network.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_CSE 4501_ Operating Systems.txt", "r");
				}
				break;

			case 4:
				//call function for 4 th year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_CSE 4703: Theory Of Computing\n");
				printf("2.PP_CSE 4801: Compiler Design\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_CSE 4703_Theory Of Computing.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_CSE 4801_Compiler Design.txt", "r");
				}
				break;

			}
		}

		else if (Dept == 2)
		{
			//eee
			switch (year)
			{
			case 1:
				//call the funtion for 1st year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_EEE 4102: Basics Electrical Engineering\n");
				printf("2.PP_PHY 4101: Physics I\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_EEE 4102_Basics Electrical Engineering.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_PHY 4101_Physics.txt", "r");
				}
				break;
			case 2:
				//call function for 2nd year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_EEE 4302: Electronic Devices\n");
				printf("2.PP_EEE 4307: Electrical Machine I\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_EEE 4302_Electronic Devices.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_EEE 4307_Electrical Machine.txt", "r");
				}
				break;
			case 3:
				//call function for 3 year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_EEE 4504: Digital Logic Design\n");
				printf("2.PP_EEE 4501: Digital signal processing\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_EEE 4504_Digital Logic Design.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_EEE 4501_Digital signal processing.txt", "r");
				}
				break;

			case 4:
				//call function for 4 th year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_EEE 4702: Microprocessor And Embeded System\n");
				printf("2.PP_EEE 4805: Power Station And Substation\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_EEE 4702_Microprocessor And Embeded System.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_EEE 4805_Power Station And Substation.txt", "r");
				}
				break;

			}
		}

		else
		{
			//mpe
			switch (year)
			{
			case 1:
				//call the funtion for 1st year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_MPE 4103: Engineering Machines \n");
				printf("2.PP_PHY 4113: Structure Of Matter\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_MPE 4103_Engineering Machines.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_PHY 4113_Structure Of Matter.txt", "r");
				}
				break;
			case 2:
				//call function for 2nd year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_MCE 4311: Fulid Meachanics I\n");
				printf("2.PP_MCE 4305: Basic Thermodynamics\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_MPE 4311_Fulid Meachanics.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_MPE 4311_Fluid Machaniary.txt", "r");
				}
				break;
			case 3:
				//call function for 3 year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_MCE 4503: Mechaincs Of Machines\n");
				printf("2.PP_MCE 4511: Fluid Machinary\n");


				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_MCE 4503_Mechaincs Of Machines.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_MPE 4311_Fulid Meachanics.txt", "r");
				}
				break;

			case 4:
				//call function for 4 th year
				system("cls");
				printf("\t\t\tChoose Course\n\n\n");
				printf("1.PP_MCE 4705: Applied Thermodynamics\n");
				printf("2.PP_MCE 4807: Machatronics\n");

				scanf_s("%d", &course);
				if (course == 1)
				{
					question_file = fopen("resources/PP_MCE 4705_Applied Thermodynamics.txt", "r");
				}
				else if (course == 2)
				{
					question_file = fopen("resources/PP_MCE 4807_Machatronics.txt", "r");
				}
				break;

			}

		}
		read_questions(question_file);
	}
}

int read_questions(FILE* question_file)
{
	int operation;
	char nothing;
	Problem problem;
	while (!feof(question_file))
	{
		fscanf(question_file, " question:%[^\n]\n", problem.question);
		fscanf(question_file, " tip:%[^\n]\n", problem.tip[0]);
		fscanf(question_file, " tip2:%[^\n]\n", problem.tip[1]);
		fscanf(question_file, " answer: %[^\n]\n", problem.answer);

	c:
		system("cls");
		printf("%s\n\n", problem.question);
		printf("1) ASK TIPS\n");
		printf("2) View Solution\n");

		scanf_s("%d", &operation);

		if (operation == 1)
		{
			printf("Tip 1: %s\n\n", problem.tip[0]);
			printf("Tip 2: %s\n\n", problem.tip[1]);
			printf("\t\t---Press Enter To Continue---\n");
			scanf_s("%c", &nothing);
			scanf_s("%c", &nothing);
			goto c;
		}
		else if (operation == 2)
		{
			printf("%s\n\n", problem.answer);
			printf("\t\t---Press Enter For next problem---\n");
			scanf_s("%c", &nothing);
			scanf_s("%c", &nothing);
		}
	}

	printf("Well done you have answered enough questions\n");
}










