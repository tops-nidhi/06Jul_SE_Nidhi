#include<iostream>
using namespace std;
int c=90;
main()
{
    int c=100;
    cout<<"Local variable c is:"<<c;
    cout<<"\nGloabal variable c is:"<<::c;
}