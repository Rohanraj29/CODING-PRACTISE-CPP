#include <iostream>
#include <string>
using namespace std;
class a{
    public:
    string r;
    void call(){
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