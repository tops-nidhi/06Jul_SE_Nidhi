#include<stdio.h>
void main()
{
	int no,i,flag=0;
	printf("Enter no to check no is prime or not:");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i == 0)
		{
			flag=1;
			goto done;
		}
	}
	done:
		if(flag==0)
		{
			printf("\n%d is prime no.",no);
		}
		else
		{
			printf("\n%d is not prime no.",no);
		}
}
