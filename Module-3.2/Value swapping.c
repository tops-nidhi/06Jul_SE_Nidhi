#include<stdio.h>
void main()
{
	int a/*4*/,b/*2*/,temp;
	printf("Enter No1:");
	scanf("%d",&a);
	printf("Enter No2:");
	scanf("%d",&b);
	printf("\nBefore value swapping No1 is:%d & No2 is:%d",a,b);
	temp=a;/*temp=4*/
	a=b;/*a=2*/
	b=temp;/*b=4*/
	printf("\nAfter swapping No1 is:%d & No2 is:%d",a,b);
}
