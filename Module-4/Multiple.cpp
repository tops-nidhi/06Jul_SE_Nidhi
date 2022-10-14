#include<iostream>
using namespace std;
class A
{
public:
int aid;
string anm;
    void aget()
    {
        cout<<"Enter your id:";
        cin>>aid;
        cout<<"Enter your name:";
        cin>>anm;
    }
};
class B
{
public:
int bid;
string bnm;
    void bget()
    {
        cout<<"Enter your id:";
        cin>>bid;
        cout<<"Enter your name:";
        cin>>bnm;
    }
};
class tops: public A, public B
{
public:
    void showdata()
    {
        cout<<"\n\n-------------"<<anm<<"---------------";
        cout<<"\nYour id is:"<<aid;
        cout<<"\n--------------"<<bnm<<"--------------";
        cout<<"\nYour id is:"<<bid;
    }
};
int main()
{
    tops t1;
    t1.aget();
    t1.bget();
    t1.showdata();
}