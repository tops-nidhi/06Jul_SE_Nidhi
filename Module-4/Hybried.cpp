#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"This A class.";
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout<<"\nThis class B.";
    }
};
class C : virtual public A
{
public: 
    C()
    {
        cout<<"\nThis C class.";
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout<<"\nThis D class.";
    }
};
int main()
{
    D d1;
}