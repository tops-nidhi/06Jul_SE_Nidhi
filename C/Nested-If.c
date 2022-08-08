#include<stdio.h>
int main()
{
	int no;
	printf("Enter no between 1 to 100:");
	scanf("%d",&no);
	if(no>0)
	{
		if(no<=100)
		{
			printf("\nNo is between 1 to 100.");
		}
		else
		{
			printf("\nNo is greater than 100.");
		}
	}
	else
	{
		printf("\nNo is less than 0.");
	}
}
