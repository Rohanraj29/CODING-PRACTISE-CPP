//WAP TO SHOW HYBRID INHERITANCE.
#include<iostream>
#include<string>
using namespace std;
class a{
    public:
    string ab;
    void call(){
        cout<<"Enter anything:-";
        getline(cin,ab);
    }
};
class b :public a{
    public:
    string abc;
    void calls(){
        cout<<"Enter anything:-";
        getline(cin,abc);
    }
};
class c:public b{
    public:
    void display(){
    cout<<"Value of a class is "<<ab<<endl;
    }
};
int main()
{
b rr;
c r;
rr.call();
rr.calls();
r.call();
r.display();
return 0;
}