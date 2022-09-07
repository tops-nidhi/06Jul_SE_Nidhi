#include<stdio.h>
#include<string.h>
void main()
{
    int len;
    char str[20];
    printf("Enter any string:");
    scanf("%s",&str);
    len=strcat(str);
    printf("\nLength of the string that you entered is:%d",len);
}