#include<iostream>
using namespace std;
class Grand
{
public:
    int nohouse;
    int ggetdata()
    {
        cout<<"Enter No of house:";
        cin>>nohouse;
        return 0;
    }
};
class Perent : public Grand
{
public:
    int bal;
    int pgetdata()
    {
        cout<<"\nEnter total bank balance:";
        cin>>bal;
        return 0;
    }
};
class child : public Perent
{
public:
    int car;
    int cgetdata()
    {
        cout<<"\nEnter no of car:";
        cin>>car;
        return 0;
    }
    int showdata()
    {
        cout<<"\nTotal no house is:"<<nohouse;
        cout<<"\n\nTotal bank balance is:"<<bal;
        cout<<"\n\nTotal no of car is:"<<car;
        return 0;
    }
};
int main()
{
    child ch;
    ch.ggetdata();
    ch.pgetdata();
    ch.cgetdata();
    ch.showdata();
}