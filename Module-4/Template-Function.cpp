#include<iostream>
using namespace std;
template <class t>
t div (t a, t b)
{
    return a/b;
}
int main()
{
    cout<<div <int> (12,6);
    cout<<endl<<div <float> (12,5);
}