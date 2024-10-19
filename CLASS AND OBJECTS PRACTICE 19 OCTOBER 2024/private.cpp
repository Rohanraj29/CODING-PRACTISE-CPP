#include <iostream>
#include <string>
using namespace std;
class a{
    string r;
    public:
    void call(){
        string s;
        s=r;
        cout<<"Enter your name:-";
        getline(cin,r);
        cout<<"My name is "<<r;
    }
};
int main()
{
    a rr;
    rr.call();
}