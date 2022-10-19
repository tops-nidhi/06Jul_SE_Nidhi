#include<iostream>
using namespace std;
template <typename t>
class Template
{
public:
    t add(t a, t b)
    {
        return a+b;
    }
};
int main()
{
    Template <int> temp;
    cout<<temp.add(12,78);
    Template <float> temp1;
    cout<<endl<<temp1.add(12,78.9);
    return 0;
}