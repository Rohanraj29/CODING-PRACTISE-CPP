#include <iostream>
using namespace std;
class a{
    public:
    int r;
    void call1(){
    cout<<"Enter the value of r:-";
    cin>>r;
    }
};
class b{
    public:
    int s;
    void call2(){
    cout<<"Enter the value of s:-";
    cin>>s;
    }
};
class c : public a,public b{
    public:
    void total(){
        cout<<r+s;
    }
};
int main()
{
    c rr;
    rr.call1();
    rr.call2();
    rr.total();
    return 0;
}