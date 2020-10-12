#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int marky;
int *amarky;
int car=1;
int *acar;

int count_park(int len,int count_pver,int *num_car)

{
	*num_car = ((len/3)*count_pver);
	
	
	printf("  \n\nTotal no. of cars that can be parked =    %d\n",*num_car);

}
int print_park(int len,int bth,int op,int *refx,int *refy)
{
	amarky = &marky;
	int a[100][100];
	int mcar[200];
	acar=&car;
	int flag =3 ;
	int count_v= (bth/10);
	int count_ini=1;
	if (op==0)
	{
		for(int i=1;i<=len;i++)
		{
			for (int j=1;j<=bth;j++)
			{
				if(i==1||i==len)
				a[i][j]='-';
				else
				{
					if(j%10==0||j==1)
					a[i][j]='-';
					else
					a[i][j]=' ';
				}
			}
		}
	}
	if (op==1)
	{

		*refx=(*refx)+flag;
		if (*refx>=len)
		{
			*refx=1+flag;
			*refy = *refy +19;
			
		}
		for(int j=0;j<8;j++)
		{
			a[*refx][(*refy)+j]='-';
			
				*amarky = (*refy)+j;
		}
	
	}
	if (op==1)
	{
		mcar[*acar]=*refx;
		mcar[*(acar)+1]=marky;
		(*acar)=(*acar)+2;
	}
	if(op==2)
	{
		int i;

		for (i=0;i<8;i++)
		{
			
			a[mcar[car-2]][(mcar[car-1])-i] = ' ';
		}
		*acar=(*acar)-2;
		*refx=(*refx)-3;

	}
	for (int i=2;i<len;i++)
	{
		if (a[i][28]=='-')
		a[i][29]='-';
		if (a[i][47]=='-')
		{
			a[i][48]='-';
			a[i][49]='-';
		}
		if (a[i][28]==' ')
		a[i][29]=' ';
		if (a[i][47]==' ')
		{
			a[i][48]=' ';
			a[i][49]=' ';
		}
		a[i][40]='-';
	}
	
	printf("\n\n\n");
	for(int i=1;i<=len;i++)
	{
		printf("\n\t\t");
		for (int j=1;j<=bth;j++)
		{
		printf("%c",a[i][j]);
		}
	}
}


int main()
{
	int len,bth,flag_b=0,temp,count_ver,count_car=0,count_pver=1,num_car,op=0,refx=1,refy=2;
	int end=0;	
	printf("\n\n\n\n\n");
	printf("\t\tMaximise the execution window for better visualisation\n\n\n\n\n");
	printf("Enter the length and breadth of the parking area.\nBreadth can only be multiple of 10\n");
	printf("\nMaximum value of length and breadth is 50m  ");
	correct_b:
	if (flag_b==6)
	printf("Please enter the values in correct format\nBreadth can only be multiple of 10\nMaximum value of length and breadth is 50m");
	scanf("%d%d",&len,&bth);

	if(bth>len)
	{
		temp=bth;
		bth=len;
		len=temp;
	}
	if (len==10);
	len=11;
	printf("%d\t%d\n",len,bth);
	if(bth%10!=0||len>50||bth>50)
	{
		flag_b=6;
		goto correct_b;
	}
	
	count_ver=(bth/10);
	if (count_ver==2||count_ver==3)
	{
		count_pver=count_ver-1;
	}
	if (count_ver>=4)
	{
		count_pver=count_ver-2;
	}
	print_park(len,bth,op,&refx,&refy);
	printf("\n\t\t  ");
	for(int i=1;i<=count_ver;i++)
	{
		if(i%2==1)
		printf("Parking");
		else
		printf("   Passage  ");
	}

	count_park(len,count_pver,&num_car);
	repeat:
	printf("\t\t\nChoose your operation :\n");
	if (count_car<num_car)
	{
		printf("Enter 1 for entry of car\n");
	}
	
	if (count_car>0)
	{
		printf("Enter 2 for exit for car\n");
	}
	
	scanf("%d",&op);
	if ((op==1 && count_car==num_car)||(op==2 && count_car==0)||op>2||op<1)
		{
			printf("    Invalid Selection");
			goto repeat;
		}
	else
	{
		if (op==1)
		count_car++;
		if (op==2)
		count_car--;
		print_park(len,bth,op,&refx,&refy);
	}
	
	printf("\n\t\t  ");
	for(int i=1;i<=count_ver;i++)
	{
		if(i%2==1)
		printf("Parking");
		else
		printf("   Passage  ");
	}
	if (count_car<num_car)
	printf ("\n\n\t\tNo. of car in the parking : %d",count_car);
	else
	printf("\n\n\tThe parking is full");
	goto repeat;
}
