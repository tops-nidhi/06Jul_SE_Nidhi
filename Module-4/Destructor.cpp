#include<iostream>
using namespace std;
class Destruct
{
public:
    Destruct()
    {
        cout<<"This is constructor.";
    }
    ~Destruct()
    {
        cout<<endl<<"This is Destructor.";
    }
};
int main()
{
    Destruct des;
}