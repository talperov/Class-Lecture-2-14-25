#include "Loops.h"

void display_menu(void)

{
	printf("Welcome to Craps!\n");
	printf("1. Print game rules.\n");
	printf("2. Play Craps\n");
	printf("3. Exit game\n");

}

int get_choice()
{
	int choice = 0;
	scanf("%d", &choice);

	return choice;
}