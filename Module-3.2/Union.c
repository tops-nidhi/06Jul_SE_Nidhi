#include<stdio.h>
union Stdata
{
    int id;
    char nm[20];
};
int main()
{
    union Stdata st;
    printf("Enter student id:");
    scanf("%d",&st.id);
    printf("Enter student name:");
    scanf("%s",&st.nm);
    // st.id=101;
    printf("Your student id is:%d",st.id);
    printf("\nYour student name is:%s",st.nm);
}