//WAP TO SHOW MULTILEVEL INHERITANCE.
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
        cout<<"My name is "<<name<<endl;
    }
};
class b: public a{
    public:
    string names;
    void calls(){
        cout<<"Enter your name:-";
        getline(cin,names);
    }
    void shows(){
        cout<<"My name is "<<names<<endl;
    }
};
class c :public b{
    public:
    string f_name;
    void calling(){
        cout<<"Enter your name:-";
        getline(cin,f_name);
    }
    void showing(){
        cout<<"My name is "<<f_name<<endl;
    }
};
int main()
{
    b r;
    c rr;
    r.call();
    r.show();
    r.calls();
    r.shows();
    r.call();
    r.show();
    rr.calling();
    rr.showing();
    return 0;

}