#include<iostream>
using namespace std;
class Argument
{
public:
    int a;
    void getdata()
    {
        cout<<"\nEnter value of a:";
        cin>>a;
    }
    int sub(Argument,Argument);
};
int Argument :: sub(Argument a1, Argument a2)
{
    cout<<"\nSubstraction is:"<<a1.a-a2.a;
    return 0;
}
int main()
{
    Argument arg,arg2;
    arg.getdata();
    arg2.getdata();
    Argument arg3;
    arg3.sub(arg,arg2);
}