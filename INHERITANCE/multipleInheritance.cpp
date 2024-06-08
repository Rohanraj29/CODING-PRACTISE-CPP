//WAP TO SHOW MULTIPLE INHERITANCE.
#include <iostream>
#include <string>
using namespace std;
class a{
    public:
    int s;
    void call(){
    cout<<"Enter the number:-";
    cin>>s;
    }
};
class b{
    public:
    int m;
    void show(){
        cout<<"Enter the number:-";
        cin>>m;
    }
};
class c: public b,public a{
    public:
    int h;
    void display(){
        cout<<"Enter the number:-";
        cin>>h;
    }
};
int main()
{
    c r;
    r.display();
    r.call();
    r.show();
    return 0;
}