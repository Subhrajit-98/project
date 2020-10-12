#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{ 
	int n,x,s=0;
	srand(time(0));
	n= rand()%100 + 1;
	printf("%d",n);
	printf ("Guess the value of the number\nHint: Its lies between 0 to 100\n");
	do
	{ 
	scanf ("%d",&x);
	if (x>n)
	{
		printf("Its is less. Try again.");
		s++;
	}
	else if (x<n)
	{
		printf ("It is more. Try again.");
		s++;
	}
	else 
	{	s++;
		printf ("You got it\nYou took %d steps",s);
	}
	}while(x!=n);

printf("\nEnter your name");
char name[15];
scanf("%s",name);
return 0;

}

