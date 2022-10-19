#include<iostream>
using namespace std;
class Overloading
{
public:
    int mod(int a,int b)
    {
        return a%b;
    }
    int mod (int a, int b, int c)
    {
        return (a*b)%(b*c);
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter 3 no:";
    cin>>a>>b>>c;
    Overloading obj;
    cout<<obj.mod(a,b);
    cout<<endl<<obj.mod(a,b,c);
    return 0;
}