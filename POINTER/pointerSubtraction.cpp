//WAP TO SUBTRACT TWO NUMBER USING POINTER.
#include<iostream>
using namespace std;
int main()
{
    int a=8;
    int b=4;
    int *p1=&a;
    int *p2=&b;
    int c=*p1-*p2;
    cout<<"Subtraction of two number is:-"<<*p1-*p2<<endl;
    cout<<"Subtraction of two number is:-"<<c;
    return 0;
}