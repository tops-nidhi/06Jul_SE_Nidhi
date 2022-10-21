#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str;
    ofstream out;
    out.open("D:/nidhi batch/06july_SE/Module-4/Hello.txt");
    out<<"Hello";
    out.close();
    ifstream in;
    in.open("D:/nidhi batch/06july_SE/Module-4/Hello.txt");
    in>>str;
    cout<<str;
    in.close();
}