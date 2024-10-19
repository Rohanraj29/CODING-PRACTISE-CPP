#include <iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a,double b){
    cout<<a+b;
}
int main()
{
    add(4,4);
    add(4,4.4);
    return 0;
}