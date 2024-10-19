#include <iostream>
using namespace std;
class a{
    public:
    void call1(){
        cout<<"My tittle is Sinha"<<endl;
    }
};
class b : public a{
    public:
    void name1(){
        cout<<"My name is Rahul"<<endl;
    }
};
class c :public b {
    public:
    void name2(){
        cout<<"My name is Rohan"<<endl;
    }
};
int main()
{
    c ss;
    ss.name1();
    ss.call1();
    ss.name2();
    ss.call1();
    return 0;
}