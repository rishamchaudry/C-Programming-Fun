#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()

{
	
	int player, comp;
	printf("Welcome to Rock Paper Scissors\n");
	printf("Your options are:\n");
	printf("1 = Rock\n");
	printf("2 = Paper\n");
	printf("3 = Scissors\n");
	printf("Enter your choice:\n");
	scanf("%d",&player);

	//Now initialize random generator to make choice for computer
	srand(time(NULL));
	comp = rand();
	//transform to range 1-3
	comp = comp%3+1;
	if(comp==1) printf("Computer chose rock.\n");
	else if(comp==2) printf("Computer chose paper.\n");
	else if(comp==3) printf("Computer chose scissors.\n");

	//Use if command to see who won
	//First case: Player chose rock
	if(player==1)
	{
		if(comp==1) printf("It's a tie.\n");
		else if(comp==2) printf("Computer wins.\n");
		else if(comp==3) printf("You win.\n");	
	}
	//Second case: Player chose paper
	else if(player==2)
	{
		if(comp==1) printf("You win.\n");
		else if(comp==2) printf("It's a tie.\n");
		else if(comp==3) printf("Computer wins.\n");
	}
	//Third case: Player chose scissors
	else if(player==3)
	{
		if(comp==1) printf("Computer wins.\n");
		else if(comp==2) printf("You win.\n");
		else if(comp==3) printf("It's a tie.\n");
	}

	printf("Thanks for playing.\n");

	return 0;
}
