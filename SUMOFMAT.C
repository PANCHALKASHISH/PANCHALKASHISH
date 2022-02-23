/*write a program to enter to 3 by 3 matrics and print the sum of it.
date:-21/02/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j,d=0;
	clrscr();
	//logic input value into 2d array//
	for(i=0;i<3;i++) //row//
	{
		for(j=0;j<3;j++) //column//
		{
			printf("\n enter value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++) //row//
	{
		for(j=0;j<3;j++) //column//
		{
			printf("\n enter value m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	//print 2d array//
	printf("first matrics is \n");
	for(i=0;i<3;i++)//row//
	{
		for(j=0;j<3;j++)//column//
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("second matrics is \n");
	for(i=0;i<3;i++)//row//
	{
		for(j=0;j<3;j++)//column//
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	printf("sum of both matrics is \n");
	for(i=0;i<3;i++)  //row//
	{
		for(j=0;j<3;j++) //column//
		{
			m3[i][j]=m1[i][j]+m2[i][j];
			printf("%d \t",m3[i][j]);
		}
		printf("\n");
	}
	getch();
}



