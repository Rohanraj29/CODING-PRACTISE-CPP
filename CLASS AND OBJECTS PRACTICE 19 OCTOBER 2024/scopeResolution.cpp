#include <iostream>
using namespace std;
int a=8;
int main()
{
    int a=8;
    cout<<"Value of a:-"<<a<<endl;
    cout<<"Value of a by scope resolution operator:-"<<::a;
    return 0;
}