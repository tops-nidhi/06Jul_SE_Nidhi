#include<iostream>
using namespace std;
class This
{
public:
    int no;
    void print(int no)
    {
        cout<<"Value of parameter no is:"<<no;
        cout<<"\nValue of global no is:"<<this->no;
    }    
};
main()
{
    This t1;
    t1.no=90;
    t1.print(100);
}