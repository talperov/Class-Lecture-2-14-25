// This example will illustrate how to work with iterative statemetns - loops


#include "Loops.h"

int main(void)
{
	int choice = 0;

	do
	{
		display_menu();
		choice = get_choice;
	} while (choice < 1 || choice > 3);

	switch (choice)
	{
	case 1: printf("Display the rules.\n");
		break;
	case 2: printf("Playing craps.\n"); 
			break;
	case 3: printf("Exiting game.\n"); 
				break; // break not neccessary in last statement.
	}
	
}
	int count = 1; // initialization expression
	FILE* input_stream = fopen("scores.txt", "r");
	int score = 0;

	while (!feof(input_stream))
	{
		fscanf(input_stream,  "%d", &score); 
		printf("score: %d\n", score); 
	}
	
	/*while (count /*control variable*/ <= 10) // conditional statement
	{
		printf("%d\n", count);
		// count = count + 1;
		count += 1; //update expression
	}
	// value of count? 11
	for (/*initialization expr*/ count = 1; /*cond*/ count <= 10;
		/*update expr*/ count += 1) // no semi colon to end 
	{
		printf("%d\n", count);
	}
	
	// value of count? 11
	count = 1;
	do
	{
		printf("%d\n", count); 
		count += 1;
	} while (count <= 10);  
	