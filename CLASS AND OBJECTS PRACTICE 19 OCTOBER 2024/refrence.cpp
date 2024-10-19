#include <iostream>
using namespace std;
int main()
{
    int a=8;
    int &b=a;
    cout<<"Value of a:-"<<a<<endl;
    cout<<"Value of b by refrence variable:-"<<b;
    return 0;
}