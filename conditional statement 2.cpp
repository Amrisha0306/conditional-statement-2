#include<stdio.h>
main()
{
	//display the food item
	printf("Enter a random number :");
	//read their food item
	int fooditem=0;
	scanf("%d",&fooditem);
	//display based on the fooditem
	
	switch(fooditem)
	{
		case 1:
			printf("Food item - Burger\nPrice - Rs129");
			break;
		case 2:
			printf("Food item - French Fries\nPrice - Rs99");
			break;
		case 3:
			printf("Food item - Pizza\nPrice - Rs239");
			break;
		case 4:
			printf("Food item - Pasta\nPrice - Rs179");
			break;
		case 5:
			printf("Food item - Sandwich\nPrice - Rs149");
			break;	
		default : 
			printf("Invalid number");
		
	}
}
