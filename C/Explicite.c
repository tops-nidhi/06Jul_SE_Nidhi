#include<stdio.h>
void main()
{
	int no1,no2;
	float ans;
	printf("Enter 2 no:");
	scanf("%d%d",&no1,&no2);
//	ans=no1/no2;
	ans=(float)no1/(float)no2;
	printf("Ans is:%f",ans);
}
