#include<stdio.h>
int main()
{
	int no[5][5]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	printf("Enter Value:");
/*	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("\nNo[%d][%d]:",i+1,j+1);
			scanf("%d",&no[i][j]);	
		}	
	}*/
	printf("\nValue is:\n"); 
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("No[%d][%d]:\t%d",i+1,j+1,no[i][j]);
		}
		printf("\n");
	}
}
