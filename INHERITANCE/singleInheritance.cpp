//WAP TO SHOW SINGLE INHERITANCE.
#include<iostream>
#include <string>
using namespace std;
class a{
    public:
    string name;
    void call(){
        cout<<"Enter your name:-";
        getline(cin,name);
    }
    void show(){
        cout<<"My name is "<<name;
    }
};
int main()
{
    a r;
    r.call();
    r.show();
    return 0;
}