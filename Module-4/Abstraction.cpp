#include<iostream>
using namespace std;
class  Abstract
{
private:
    int a;
    int b;    
public:
    int add(int x,int y)
    {
        a=x;
        b=y;
        return a+b;
    }
};
int main()
{
    int a, y;
    cout<<"Enter 2 no:";
    cin>>a>>y;
    Abstract ab;
    cout<<ab.add(a,y);
}