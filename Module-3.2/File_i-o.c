#include<stdio.h>
int main()
{
    // char str[20];
    FILE *fptr;
    fptr=fopen("D:/Nidhi batch/06july_SE/Module-3.2/Hello.txt","w");
    fprintf(fptr,"Hello");
    fclose(fptr);
    // fptr=fopen("D:/Nidhi batch/06july_SE/Module-3.2/Hello.txt","r");
    // fscanf(fptr,"%s",&str);
    // printf("%s",str);
    // fclose(fptr);
}