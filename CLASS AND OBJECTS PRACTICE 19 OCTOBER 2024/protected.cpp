#include <iostream>
#include <string>
using namespace std;
class a{
    protected:
    string r;
};
class b :public a{
    public:
    void call(){
        string m;
        r=m;
        cout<<"Enter your name:-";
        getline(cin,r);
        cout<<"My name is "<<r;
    }
};
int main()
{
    b rr;
    rr.call();
}