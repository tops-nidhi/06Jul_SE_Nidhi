#include<stdio.h>
int main()
{
    int no1,no2;
    int ch;
    printf("Enter any 2 no to perform methamitic opreation:");
    scanf("%d%d",&no1,&no2);
    printf("1.Add\n2.Sub\n3.Mul\n4.Modulo\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\nAdd is:%d",no1+no2);
        break;
    case 2:
        printf("\nSub is:%d",no1-no2);
        break;
    case 3:
        printf("\nMul is:%d",no1*no2);
        break;
    case 4:
        printf("\nModulo is:%d",no1%no2);
        break;
    default:
        printf("\nPlease enter vaild choice................................");
        break;
    }
}
