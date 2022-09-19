#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;
    int no;
    printf("Enter the size:");
    scanf("%d",&no);
    ptr=(int*)malloc(no*sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("\nEnter value:");
        scanf("%d",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("\nValue is:%d",ptr[i]);
    }
}