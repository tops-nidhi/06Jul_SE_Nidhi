#include<iostream>
using namespace std;
class Encapsulation
{
    int no;
    int no1;
public:
    int data()
    {   
        no=10;
        no1=101; 
        cout<<"Value of 1st no is:"<<no;
        cout<<"\nVlaue of 2nd no is:"<<no1;
        return 0;

    }
};
int main()
{
    Encapsulation cap;
    cap.data();
}