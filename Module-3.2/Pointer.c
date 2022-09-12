#include<stdio.h>
void main()
{
    int a=90;
    int *ptr;
    ptr=&a;
    // printf("Address of the value is:%d\n",ptr);
    // printf("Value of pointer of the pointer is:%d",*ptr);
    // ptr--;
    // printf("After increment value of the increment:%d",ptr);
    *ptr=13;
    printf("Value of the a after change is:%d",a);
}