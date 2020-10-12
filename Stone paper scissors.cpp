#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int decision_make(int x,int z)
{
	if (x==z)
	return 0;
	if (x+1==z||x-z==2)
	return 1;
	else
	return 2;
}	
int main()
{
	int x,y=1,z,score=0,rep=0,set=0,rate;
	char name[20];
	srand(time(0));
	
////	printf("%d\n",x);
	printf("                  Welcome to stone paper scissors game                           \n\n\n");
	printf("                        Rules-----\n");
//	printf("                        1. Follow the rules\n");
//	printf("                        2. Follow rule no. 1\n");
	printf("                        1. For every win you get +1 and -1 vice-versa.\n");
	printf("                        2. Your initial score is 0\n");
	printf("                         \n\n\n");
	printf("                        so here we begin\n");
	printf("Enter your name  : ");
	scanf("%s",name);
	printf("%s",name);
	do
	{
		x=rand()%3+1;
		last:
		printf("\n    Enter your choice \n\n\n");
		printf(" 1 for stone               2 for paper                   3 for scissors\n");
		scanf("%d",&z);
		if (z!=1 && z!=2 && z!=3)
		{printf("           %s has choosen wrong input\n",name); 
		goto last;
			}
		if (x==1)
			{
				printf("          Computer has choosen stone\n");
			}	
		if (x==2)
			{
				printf("      Computer has choosen paper\n");	
			}
		if (x==3)
			{
				printf("       Computer has choosen scissor\n");	
			}
		if (z==1)
		{
				printf("        %s has choosen stone\n",name);
		}
		
		if (z==2)
			{
				printf("      %s has choosen paper\n",name);
			}
		if (z==3)
			{printf("           %s has choosen scissor\n",name);
			}
	
		int flag=decision_make(x,z);
//		printf("Computer has choosen %s\n",c);	
//		printf("%s has choosen %s\n",name,d);
		if (flag==1)
			{score++;
			printf("         Wooow!!!!   You have won\n\n");
			}
		else if (flag==2)
		{	score--;
			printf("               Oh no.......  You have lose\n\n");

		}	
		else
		{
				printf("               Thats a draw\n\n");
			
		}
		
	printf("           Your score is %d\n\n",score);
	printf ("    Do you want to play again??\n\t 1. Yes           2. No ");
	scanf("%d",&set);	
	}while(set==1);
printf ("%s your score is ........%d    Thank you for playing...........\n\n\n",name,score);
printf("Rate this game out of 5\n\n");	
scanf("%d",&rate);
}
