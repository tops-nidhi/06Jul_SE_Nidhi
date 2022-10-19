#include<iostream>
using namespace std;
class A
{
public:
    int data()
    {
        cout<<"This is Class A.\n";
        return 0;
    }
};
class B
{
public:
    int data()
    {
        cout<<"This is Class B."; 
        return 0;
    }
};
int main()
{
    A a1;
    B b1;
    a1.data();
    b1.data();
}