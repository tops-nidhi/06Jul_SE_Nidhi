#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[10];
    cout<<"Enter value:-\n";
    for(i=0;i<5;i++)
    {
        cout<<endl<<"A["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"\nValue is:-\n";
    for(i=0;i<5;i++)
    {
        cout<<"\nA["<<i<<"]:\t"<<a[i];
        
    }
}