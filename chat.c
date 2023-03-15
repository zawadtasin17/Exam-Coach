#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

#define N_GREETINGS 5
#define MAX_LENGTH 1000


int chat()
{
		//initialising greeting statements
	char greetings[N_GREETINGS][MAX_LENGTH] = {
		"Hii , How can i help you today?" ,
		"Need any help ? ",
		"How's the study going kid?",
		"What do you want? I am busy",
		"Any trouble ?"
	};

	int random_num;

	//generate random number to randomly display coach's greeting at each time
	srand(time(NULL));
	random_num = rand() % (N_GREETINGS);

	printf("Coach : %s", greetings[random_num]);

	//display different options for responds

	switch (random_num)
	{
	case 0:
		break;

	case 1:
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	}
	



	
}