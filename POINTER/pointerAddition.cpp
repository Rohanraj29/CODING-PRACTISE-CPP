//WAP TO ADD TWO NUMBER USING POINTER.
#include<iostream>
using namespace std;
int main()
{
    int a=8;
    int b=8;
    int *p1=&a;
    int *p2=&b;
    int c=*p1+*p2;
    cout<<"Addition of two number is:-"<<*p1+*p2<<endl;
    cout<<"Addition of two number is:-"<<c;
    return 0;
}