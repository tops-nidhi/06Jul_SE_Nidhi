#include<iostream>
using namespace std;
class Construct
{
public:
    Construct (int no)
    {
        cout<<"Vlaue of no is:"<<no;
    }
};
int main()
{
    Construct con(12);
}