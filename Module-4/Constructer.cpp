#include<iostream>
using namespace std;
class Construct
{
public:
    Construct()
    {
        cout<<"This is constructer.";
    }
    Construct(int n)
    {
        cout<<"\nThis is paramiterize constructer.";
    }
};
int main()
{
    Construct con;
    Construct con1(12);
}