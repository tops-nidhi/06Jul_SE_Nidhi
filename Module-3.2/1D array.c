#include<stdio.h>
int main()
{
    int no[10];
    int i;
    for(i = 0; i < 10; i++)
    {
    	printf("\nEnter no[%d]:",i+1);
    	scanf("%d",&no[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("\nNo[%d]:\t%d",i+1,no[i]);
	}
	return 0;
}
