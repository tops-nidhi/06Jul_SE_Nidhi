#include<iostream>
using namespace std;
// int 
int data(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    cout<<"Enter 2 value:";
    cin>>a>>b;
    cout<<"Min value is:"<<data(a,b);
    return 0;
}