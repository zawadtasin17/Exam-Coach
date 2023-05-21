#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include"functions.h"
#include"chat.h"

#define N_GREETINGS 4
#define MAX_LENGTH 1000

#pragma warning(disable : 4996)


int chat()
{
	//initialising greeting statements
	char greetings[N_GREETINGS][MAX_LENGTH] = {
		"Hii , How can i help you today?" ,
		"Need any help ? ",
		"Heey!!! How's the study going?",
		"Any trouble ?"
	};

	int random_num;
	char message[MAX_LENGTH];

	//generate random number to randomly display coach's greeting at each time
	srand(time(NULL));
	random_num = rand() % (N_GREETINGS);

	system("cls");
	displayMessage(greetings[random_num], 0);
	printf("\n\n\t\t--Choose Response--\n\n");

	//display different options for responds

	switch (random_num)
	{
		int response;

	case 0:
		printf("1) I want to solve some problems\n");
		printf("2) I want to try Quick Practice mode\n");
		printf("3) I want to view my progress\n");
		printf("4) Nothing! Goodbye\n\n");

		scanf("%d", &response);
		switch (response)
		{
		case 1:
			//Redirect to solving problems sections
			displayMessage("Sure Let me Redirect you to Problem Solving Area\n", 0);

			Sleep(1000);
			system("cls");
			//call function when code is ready
			printf("Muntasir's part will be called here");
			break;

		case 2:
			//Redirect to Quck Practice Mode
			displayMessage("Sure Let me Launch Quick Practice Mode\n", 0);

			Sleep(1000);
			system("cls");
			//call function when code is ready
			printf("Tasin's part will be called here");
			break;

		case 3:
			//Redirect to Progress Tracking
			displayMessage("You have been Making A lot Awesome Progress lately , Check it out...\n", 0);
			Sleep(1000);
			system("cls");
			//call function when code is ready
			printf("Proress Tracking  part will be called here");
			break;
		case 4:
			//Redirect to Main menu
			displayMessage(" Keep Up with your studies. Don't Forget to rest Well...\n", 0);
			Sleep(1000);
			system("cls");
			main_menu();
			break;
		default:
			printf("Sorry Ivalid Input");
			exit(0);
			break;
		}
		break;

	case 1:
		printf("1) I have trouble retaining information. Any tips?\n");
		printf("2) Tips to prepare for exams\n");
		printf("3) Tips to Improve speed\n");
		printf("4) No. Everything is  fine\n");
		scanf("%d", &response);

		switch (response)
		{
			int response2 = 0;
		case 1:	//tips to improve memory
			system("cls");
			displayMessage(" Well this is a common problem students face. Here is a tip:\n\n", 0);
			displayMessage("Break up your study sessions into smaller chunks of time. You remember better what you read first and  what you read last , and tend to forget all which is in the middle. Breaking your study session in several chuncks creates more first and last moments and less in betweens.\n\n", 1);
			printf("\n\n\t\t---Choose Response---\n\n");
			printf("1) Got it. Thanks\n");
			printf("2) Next tip\n");
			scanf("%d", &response2);

			switch (response2)
			{
				int response3 = 0;
			case 1:
				displayMessage(" You are Welcome. Keep Practicing\n\n\n", 0);
				Sleep(1000);
				chat();
				break;
			case 2:
				//next tip
				system("cls");
				displayMessage("  Here is another tip:\n\n", 0);
				displayMessage(" Use active learning techniques. Instead of just reading and re-reading your notes or textbook, try to actively engage with the material.\n\n", 1);
				printf("\n\n\t\t---Choose Response---\n\n");
				printf("1) Great tip. Thanks\n");
				printf("2) Another tip\n");
				scanf("%d", &response3);

				switch (response3)
				{
					int response4 = 0;
				case 1:
					displayMessage(" Make sure you implement  them\n", 0);
					chat();
					break;
				case 2:
					//another tip
					system("cls");
					displayMessage(" Here is another tip:\n\n\n", 0);
					displayMessage("Make connections : Try to relate new information to something you already know or have experienced", 1);
					printf("\n\n\t\t---Choose Response---\n\n");
					printf("1) Great tips. Thanks\n");
					scanf("%d", &response4);

					switch (response4);
					{
					default:
						chat();
					}
					break;
				}
				break;
			}
			break;

		case 2: //tips to prepare for exams

			system("cls");
			displayMessage("You have Exams coming up? Here are some tips:\n\n", 0);
			displayMessage("Start early: Don't wait until the last minute to start studying. Give yourself enough time to review all of the material thoroughly and avoid cramming.\n\n", 1);
			printf("\n\n\t\t---Choose Response---\n\n");
			printf("1) Got it. Thanks\n");
			printf("2) Next tip\n");
			scanf("%d", &response2);

			switch (response2)
			{
				int response3 = 0;
			case 1:
				displayMessage(" You are Welcome. Keep Practicing\n", 0);
				Sleep(1000);
				chat();
				break;
			case 2:
				//next tip
				system("cls");
				displayMessage("  Here is another tip:\n\n", 0);
				displayMessage(" Don't memorize answers to past questions. Try to understand the material and master it by your fingertips\n\n", 1);

				printf("\n\n\t\t---CHOOSE OPTION---\n\n");
				printf("1) Great tips. Thanks\n");
				scanf("%d", &response3);

				switch (response3);
				{
				default:
					chat();
					break;
				}

				break;
			}
		case 3: //tips to improve speed

			system("cls");
			displayMessage(" Answering questions fast is a must have ability to survive in the world of iut. Here are some tips:\n\n", 0);

			displayMessage("Answer easy questions first : Start by answering the questions that you find easy.This will help you to build momentum and gain confidence as you work through the exam..\n\n", 1);

			printf("\n\n\t\t---Choose Response---\n\n");
			printf("1) Got it. Thanks\n");
			printf("2) Next tip\n");
			scanf("%d", &response2);

			switch (response2)
			{
				int response3 = 0;
			case 1:
				displayMessage("You are Welcome. Keep Practicing\n", 0);
				chat();
				break;
			case 2:
				//next tip
				system("cls");
				displayMessage("Here is another tip:\n\n", 0);

				displayMessage("Practice timed exams: One of the best ways to improve your speed is to practice taking timed exams. This will help you to become more familiar with the format of the exam and the pace that you need to maintain.\n\n", 1);
				printf("\n\n\t\t---Choose Response---\n\n");
				printf("1) Great tips. Thanks\n");
				printf("2) Another tip\n");
				scanf("%d", &response3);

				switch (response3)
				{
					int response4 = 0;
				case 2:
					system("cls");
					displayMessage("Here is another tip:\n\n", 0);
					displayMessage("Use shortcuts: Look for shortcuts that can help you to solve problems more quickly. For example, if you are taking a math exam, learn how to use mental math techniques to save time.\n\n", 1);
					printf("\n\n\t\t---Choose Response---\n\n");
					printf("1) Great tips. Thanks\n");
					scanf("%d", &response4);

					switch (response4);
					{
					default:
						chat();
						break;
					}
				}

				break;
			}
			break;
		case 4:
			displayMessage("Great. Continue Working hard", 0);
			Sleep(2000);
			main_menu();
			break;
		}
		break;

	case 2:
		printf("1) Everything is Great\n");
		printf("2) I don't Understand anything\n");
		printf("3) I'm feeling stressed about the upcoming exams. Can you provide some motivation?\n");
		printf("4) Very Intense. I am tired\n\n");
		scanf("%d", &response);

		switch (response)
		{
			int response2;
		case 1:
			//respond to one
			displayMessage("Great to hear that everything is going well for you! Keeping a positive attitude is key to success in exams.\n", 0);
			Sleep(2000);
			chat();
			break;
		case 2:
			//respond to 2
			system("cls");
			displayMessage(" I know how frustrating that can be. Here are some tips to understand your lectures nd material better\n\n", 0);
			displayMessage(" 1- Break Down the concepts into smaller entities: If a Concept seems to large to absorb it will be better to break it down into smaller more manageable entities\n\n", 1);
			displayMessage(" 2- Use examples: when you don't understand the concepts you have to check  examples , they will make it easier to grasp.\n", 1);
			displayMessage(" 3- Ultimately ask your teachers: Teachers Love when you ask them questions , During your classes ask your teachers anything you don't understand.\n\n", 1);
			
			printf("\t\t--Choose Reponse--\n\n");
			printf("1) Ok got it\n");
			printf("2) Will this work?\n");
			scanf("%d", &response2);

			switch (response2)
			{
			case 1:
				displayMessage("Great now get back to work.\n", 0);
				Sleep(2000);
				chat();
				break;
			case 2:
				displayMessage("it has been proven efficient since dawn of time haha... Now get back to work\n\n", 0);
				Sleep(2000);
				chat();
				break;
			}

			break;
		case 3:
			//respond to 3
			system("cls");
			displayMessage("You have exams coming up? No need to worry your super coach is here. Here are some tips: \n\n", 0);
			displayMessage("1- Make a study plan for your upcoming exams. Studying blindly won't get you anywhere , you need a well planned schedule.\n\n", 1);
			displayMessage("2- Don't Cram for your exams. Never cram. it is a hihly inefficient way ofstudying and won't add value to your knowledge. Also Questions change so focus on understanding the key concepts.\n\n", 1);
			displayMessage("3- Use study techniques that work for you. Try as many as you can untilyou find the right one. I recommend trying flashcards\n\n", 1);

			printf("\t\t--Choose Response--\n\n");
			printf("1) If i do this will it work?\n");
			printf("2) i'll do it\n");
			printf("3) i'm really scared\n");

			scanf("%d", &response2);
			switch (response2)
			{
				int response3 = 0;
			case 1:
				system("cls");
				displayMessage("Yes. Applying this techniques will hihly increase your chances of being on point for your exams\n\n", 0);
				printf("\t\t--Choose Option--\n\n");
				printf("1) OK i will do it. Thanks\n");
				scanf("%d", &response3);
				if (response3)
				{
					displayMessage("You're Welcome. Remember you have no reason to worry if you prepare\n", 0);
					Sleep(2000);
					chat();
				}
				break;
			case 2:
				displayMessage("Good. Remember you have no reason to worry if you prepare\n\n", 0);
				Sleep(2000);
				chat();
				break;

			case 3:
				displayMessage("You have no reason to be scared if you prepare. Apply the techniques above and everything will be fine\n", 0);
				printf("\t\t--Choose Response--\n\n");
				printf("1) OK. Got it");
				scanf("%d", &response3);
				if (response3)
				{
					Sleep(2000);
					chat();
				}

			}

			break;
		case 4:
			//respond to  4
			system("cls");
			displayMessage("Studies in IUT can be very tough. Don't forget resting is also part of learning. You should:\n", 0);
			displayMessage(" 1) Prioritise your self care\n", 1);
			displayMessage(" 2) Take breaks often\n", 1);
			displayMessage(" 3) Make sure you get enough sleep\n\n", 1);
			printf("\t\t--Choose Response--\n");
			printf("1) Got it\n");
			scanf(response2);
			if (response2)
				chat();
			break;
		}
		break;

	case 3:
		printf("1) Yes, I'm having trouble staying focused while studying.\n");
		printf("2) Yes, I'm feeling unmotivated to study.\n");
		printf("3) I'm not sure if I'm studying efficiently.\n");
		scanf("%d", &response);

		switch (response)
		{
			int response2;
		case 1:
			//respond to one
			system("cls");
			displayMessage("Here are some tips to improve your focus while studying\n", 0);
			displayMessage("1)Get enough sleep: Sleep is important for cognitive function, so make sure you're getting enough restful sleep each night. \n", 1);
			displayMessage("2)Try to study in a quiet, distraction-free environment. Turn off your phone or put it on silent	 \n", 1);
			displayMessage("3) have shown that people are better able to focus for shorter periods of time, so try to break your study sessions into shorter, focused segments of 25-50 minutes, followed by a short break. \n", 1);
			printf("\t\t--Choose response--\n");
			printf("1) Ok got it!\n");
			printf("2) Why must it be soo hard?\n");
			scanf("%d", &response2);
			switch (response2)
			{
			case 1:
				chat();
				break;
			case 2:
				displayMessage("It can feel difficult to stay focused and motivated but you have to do it anyway \n", 0);
				Sleep(2000);
				chat();
				break;
			}

			break;
		case 2:
			//respond to 2
			system("cls");
			displayMessage("Here are some tips to improve your motivation and drive\n", 0);
			displayMessage("1) Set specific, measurable, achievable, relevant, and time-bound (SMART) goals to give yourself direction and purpose. Make sure your goals are challenging but realistic. \n", 1);
			displayMessage("2)Identify your reasons for pursuing your goals and remind yourself of them often to stay motivated. \n", 1);
			displayMessage("3) Surround yourself with people who support and encourage you \n", 1);
			printf("\t\t--Choose response--\n");
			printf("1) Ok got it!\n");
			printf("2) Will this really work?\n");
			scanf("%d", &response2);
			switch (response2)
			{
				int response3;
			case 1:
				chat();
				break;
			case 2:
				system("cls");
				displayMessage("You won't know unless you try. Don't you trust your coach?\n\n", 0);
				printf("\t\t--Choose response--\n");
				printf("1)Ok coach! I trust you\n");
				printf("2)I don't trust you\n");
				scanf("%d", &response3);
				switch (response3)
				{
				case 1:
					displayMessage("Great! Good Luck\n", 0);
					Sleep(2000);
					chat();
					break;
				case 2:
					displayMessage("Well , this is very sad\n", 0);
					Sleep(2000);
					chat();
					break;
				}
				break;
			}
			break;
		case 3:
			//respond to 3
			displayMessage("Here are some tips to improve your study efficiency\n", 0);
			displayMessage("1)Plan out what you need to study and when. This will help you stay organized and make the most of your study time. \n", 1);
			displayMessage("2) Focus on the most important topics or concepts first, and then move on to less important ones. \n", 1);
			displayMessage("3)Take regular breaks to give your brain a rest and recharge \n", 1);
			printf("\t\t--Choose response--\n");
			printf("1) Ok got it!\n");
			printf("2) Will this really work?\n");
			scanf("%d", &response2);
			switch (response2)
			{
				int response3;
			case 1:
				chat();
				break;
			case 2:
				displayMessage("You won't know unless you try. Don't you trust your coach?\n\n", 0);
				printf("\t\t--Choose response--\n");
				printf("1)Ok coach! I trust you\n");
				printf("2)I don't trust you\n");
				scanf("%d", &response3);
				switch (response3)
				{
				case 1:
					displayMessage("Great! Good Luck", 0);
					Sleep(2000);
					chat();
					break;
				case 2:
					displayMessage("Well , this is very sad" , 0);
					Sleep(2000);
					chat();
					break;
				}
				break;

			}
			break;

		}




		printf("\n\n\n\n");
	}
}



void displayMessage(char* str , int list)
{
	char message[MAX_LENGTH];
	strcpy(message, str);
	if(!list) printf("Coach: ");
	
	for (int i = 0; message[i] != '\0'; i++)
	{
		printf("%c", message[i]);
		Sleep(30);
	}
}
