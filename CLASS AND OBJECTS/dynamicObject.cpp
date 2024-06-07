//WAP TO SHOW DYNAMIC OBJECT.
//THE ADDRESS OF DYNAMIC OBJECT RETURNED BY THE NEW OPERATOR CAN BE DEREFRENCED AND ACCESS TO THEM CAN BE CREATED.
#include<iostream>
using namespace std;
class a{
    public:
    int d;
    int e;
    void call(){
        cout<<"Enter the value of d:-";
        cin>>d;
        cout<<"enter the value of e:-";
        cin>>e;
    }
    void show(){
        cout<<"Value of D is "<<d<<endl;
        cout<<"Value of E is "<<e<<endl;
    }
};
int main()
{
    a *r;
    r=new a;
    r->call();
    r->show();
    delete r;
    return 0;
}