//WAP TO SHOW FUNCTION OVERLOADING IN C++.
//IT IS ALSO KNOWN AS STATIC BINDING OR METHOD OVERLOADING.
#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
    void add(int r,double q){
        cout<<r+q;
    }
    int main(){
        add(4,4);
        add(4,4.4);
        return 0;
    }
