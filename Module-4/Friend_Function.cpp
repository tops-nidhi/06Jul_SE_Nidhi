#include<iostream>
using namespace std;
class Friend_Function
{
private:
    int no;
public:
    friend int data(Friend_Function);
};
int data(Friend_Function fc)
{
    cout<<"Enter value of no:";
    cin>>fc.no;
    cout<<"Value of no is:"<<fc.no;
    return 0;
}

int main()
{
    Friend_Function fd;
    data(fd);
    return 0;
}
