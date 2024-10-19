#include <iostream>
using namespace std;
class a{
    public:
    void name(){
        cout<<"Rohan Raj";
    }
};
class b :public a{
    public:
    void name(){
        cout<<"Rahul Raj";
    }
};
int main()
{
    a *aa;
    b r;
    aa=&r;
    aa->name();
    return 0;
}