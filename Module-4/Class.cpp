#include<iostream>
using namespace std;
class Data
{
public:
    int id;
    char nm[10];
    int min(int a, int b)
    {
        if (a<b)
        {
            /* code */
            return a;
        }
        else
        {
            return b;
        }
                
    }
};
int main()
{
    int a,b;
    Data obj;
    cout<<"Enter 2 value:";
    cin>>a>>b;
    cout<<endl<<"Minimum value is:"<<obj.min(a,b);
}