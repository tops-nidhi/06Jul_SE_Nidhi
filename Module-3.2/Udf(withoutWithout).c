#include<stdio.h>
int id;
void getdata()
{
    // int id;
    printf("Enter user id:");
    scanf("%d",&id);
}
void showdata()
{
    printf("User id:%d",id);
}
int main()
{
    getdata();
    showdata();
}