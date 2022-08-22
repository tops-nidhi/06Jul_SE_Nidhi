#include<stdio.h>
int id;//gloabl variable
/*void getdata(void)//Without return - without parameter
{
    // int id;//local variable
    printf("Enter user id:");
    scanf("%d",&id);
    printf("\nUser id is:%d",id);
}*/
/*void showdata(int no/*formal parameter*//*)//Without return - With parameter(call by value)
{
    printf("\nValue of no is:%d",no);
}*/
/*float data()//With return - without parameter
{
    printf("Enter value of no:");
    scanf("%d",&id);
    return id;
}*/
float add(float a, float b)//With return - with parameter(call by value)
{
    return a+b;
}
int main()
{
	/*int no;
	printf("Enter Value of no:");
	scanf("%d",&no);*/
    // getdata();
    // showdata(no);
    // printf("%f",data());
    printf("%f",add(5.6f,10.7f));
}
