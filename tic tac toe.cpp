#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[23][23];
int print_park(int input,int mark)
{

	int refx,refy;
	int *arefx,*arefy;
	arefx=&refx;
	arefy=&refy;
	if (input==0)
	{
//		printf("We are here");
		int m=0;
		for( int i= 1; i<=23;i++)
		{
			for(int j= 1;j<=23;j++)
				{
					if (i==8||i==16)
					a[i][j]='-';
					else if (j==8||j==16)
					{
						a[i][j]='|';
					}
			
					else 
					a[i][j]=' ';
				}
		}
		for( int i= 4; i<=20;i+=8)
		{
			for(int j= 4;j<=20;j+=8)
			{
				if ((i==4||i==12||i==20)&&(j==4||j==12||j==20))
				{
				
					a[i][j]='1'+m;
					m++;
				}
			}
		}
	}
else	
	{

		if (0<input&&input<4)
		refx=4;
		if (3<input&&input<7)
		refx=12;
		if (6<input&&input<10)
		refx=20;
		if (input==1||input==4||input==7)
		refy=4;
		if (input==2||input==5||input==8)
		refy=12;
		if (input==3||input==6||input==9)
		refy=20;
		if (((a[refx][refy])!='O')&&((a[refx][refy])!='X'))	
		{
			if (mark==1)
			a[refx][refy]='X';
			if (mark==0)
			a[refx][refy]='O';
		}
		else
		{
			
			return 1;
		}
	}
if((mark==10)||(mark==0))
{
	for( int i= 1; i<23;i++)
	{
		printf("\n\t\t");
		for(int j= 1;j<23;j++)
		{
			
			printf("%c",a[i][j]);
		}
}
printf("\n\n");
	
}


return 0;

}
int main()
{
	printf("\n\n\tWelcome to tic tac toe game");
	printf("\n\n\tYour symbol would be X.\n\n\tComputer would use O as symbol.");	
	alpha:
	srand(time(0));
	int go,input,check,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,temp,no=1,tie=0,decide;
	int inputa[2];

	print_park(0,10);
	printf("\n\n\tDo you want to go first???\n\n\t Enter 1 for Yes    Enter 2 for No");
	scanf("%d",&go);
	
	if(go==2)
	goto cfirst;
	againu:
	bat:
	printf("\n\n\tEnter your choice");
	scanf("%d",&input);
	if (input<1||input>9)
	goto againu;
	check=print_park(input,1);
	if (check==1)
	{
		printf("\n\t\tSpace is already occupied");
		goto againu;
	}
	
	if(input==1||input==2||input==3)
	k++;
	if(input==4||input==5||input==6)
	l++;
	if(input==7||input==8||input==9)
	m++;
	if(input==1||input==4||input==7)
	n++;
	if(input==2||input==5||input==8)
	o++;
	if(input==3||input==6||input==9)
	p++;
	if(input==1||input==5||input==9)
	q++;
	if(input==3||input==5||input==7)
	r++;
	tie++;
	if(k==3||l==3||m==3||n==3||o==3||p==3||q==3||r==3)
	{
		printf("\n\n\t\tYou have won");
		goto end;
	}
	if (tie==9)
	{
		printf("\n\t\t Its a draw");
		goto end;
	}

	cfirst:
	input=0;
	if (K==2)
	{
		input=3;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=2;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=1;
		check=print_park(input,0);
		if(check==0)
		goto io;
	}
	if (L==2)
	{
		input=4;
		check=print_park(input,0);
		if(check==0)
		goto io;		 
		input=5;
		check=print_park(input,0);
		if(check==0)
		goto io;		 
		input=6;
		check=print_park(input,0);
		if(check==0)
		goto io;		 
	}
	if (M==2)
	{
		input=7;
		check=print_park(input,0);
		if(check==0)
		goto io;		
		input=8;
		check=print_park(input,0);
		if(check==0)
		goto io;		
		input=9;
		check=print_park(input,0);
		if(check==0)
		goto io; 
	}
	if (N==2)
	{
		input=4;
		check=print_park(input,0);
		if(check==0)
		goto io; 
		input=1;
 		check=print_park(input,0);
		if(check==0)
		goto io;
		input=7;
		check=print_park(input,0);
		if(check==0)
		goto io; 
	}
	if (O==2)
	{
		input=2;
		check=print_park(input,0);
		if(check==0)
		goto io; 
		input=5;
		check=print_park(input,0);
		if(check==0)
		goto io; 
		input=8;
		check=print_park(input,0);
		if(check==0)
		goto io; 
	}
	if (P==2)
	{
		input=3;
		check=print_park(input,0);
		if(check==0)
		goto io; 
		input=6;
 		check=print_park(input,0);
		if(check==0)
		goto io; 
		input=9;
		check=print_park(input,0);
		if(check==0)
		goto io; 
	}
	if (Q==2)
	{
		input=1;
		check=print_park(input,0);
		if(check==0)
		goto io; 
		input=5;
		if(check==0)
		goto io; 
		input=9;
		check=print_park(input,0);
		if(check==0)
		goto io; 
	}
	if (R==2)
	{
		input=3;
		check=print_park(input,0);
		if(check==0)
		goto io; 		 
		input=5;
 		check=print_park(input,0);
		if(check==0)
		goto io;  
		input=7;
		check=print_park(input,0);
		if(check==0)
		goto io;  
	}
	if (k==2)
	{
		input=3;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=2;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=1;
		check=print_park(input,0);
		if(check==0)
		goto io;
	}
	if (l==2)
	{
		input=4;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=5;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=6;
		check=print_park(input,0);
		if(check==0)
		goto io;
 	}
	if (m==2)
	{
		input=7;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=8;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=9;
		check=print_park(input,0);
		if(check==0)
		goto io;
 	}
	if (n==2)
	{
		input=4;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=1;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=7;
		check=print_park(input,0);
		if(check==0)
		goto io;
 	}
	if (o==2)
	{
		input=2;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=5;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=8;
		check=print_park(input,0);
		if(check==0)
		goto io;	
	}
	if (p==2)
	{
		input=3;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=6;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=9;
		check=print_park(input,0);
		if(check==0)
		goto io;
	}
	
	if (q==2)
	{
		input=1;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=5;
		check=print_park(input,0);
		if(check==0)
		goto io;
 		input=9;
		check=print_park(input,0);
		if(check==0)
		goto io;
	}
	if (r==2)
	{
		input=3;
		check=print_park(input,0);
		if(check==0)
		goto io;
		input=5;
  		check=print_park(input,0);
		if(check==0)
		goto io;
		input=7;
		check=print_park(input,0);
		if(check==0)
		goto io;
	}
	if (k!=2||l!=2||m!=2||n!=2||o!=2||p!=2||q!=2||r!=2||K!=2||L!=2||M!=2||N!=2||O!=2||P!=2||Q!=2||R!=2)
	{
		printf("Random");
		ball:
		input= rand()%9 + 1;
		check=print_park(input,0);
		if (check==1)
		goto ball;
	}
	io:
	if(input==1||input==2||input==3)
	K++;
	if(input==4||input==5||input==6)
	L++;
	if(input==7||input==8||input==9)
	M++;
	if(input==1||input==4||input==7)
	N++;
	if(input==2||input==5||input==8)
	O++;
	if(input==3||input==6||input==9)
	P++;
	if(input==1||input==5||input==9)
	Q++;
	if(input==3||input==5||input==7)
	R++;
	if(K==3||L==3||M==3||N==3||O==3||P==3||Q==3||R==3)
	{
		printf("\n\n\t\tComputer have won");
		goto end;
	}	
	tie++;
	if (tie==9)
	{
		printf("\n\t\t Its a draw");
		goto end;
	}
	printf("Computer has choosen %d",input); 
	goto bat;
	end:
	printf("\nDo you want to play again??\n\t Press 1 yor yes    2 for no");
	scanf("%d",&decide);
	if (decide==1)
	goto alpha;
	
}
