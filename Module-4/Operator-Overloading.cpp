#include<iostream>
using namespace std;
class Operator
{
public:
    int no;
    int get()
    {
        cout<<"\nEnter the value of no:";
        cin>>no;
        return 0;
    }
    Operator operator +(Operator op)
    {
        Operator op1;
        op1.no = no + op.no;
        return op1;
    }
    void show()
    {
        cout<<" value of no is:"<<no<<endl;
    }
};
int main()
{
    Operator obj1,obj2;
    
    obj1.get();
    cout<<"\nEntered";
    obj1.show();
    obj2.get();
    cout<<"\nEntered";
    obj2.show();
    Operator obj3;

    obj3 = obj1 + obj2;
    cout<<"\nAfter increment";
    obj3.show();
}