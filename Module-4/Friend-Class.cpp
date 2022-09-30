#include<iostream>
using namespace std;
class Friend_Class
{
private:
    int no;
public:
   friend class Friend;
};
class Friend
{
public:
    int data(Friend_Class &fc)
    {
        cout<<"Enter no:";
        cin>>fc.no;
        cout<<"Value of no is:"<<fc.no;
        return 0;
    }
};
int main()
{
    Friend_Class fd;
    Friend fn;
    fn.data(fd);
    
    return 0;
}
