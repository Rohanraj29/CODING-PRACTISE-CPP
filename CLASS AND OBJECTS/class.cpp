//WAP TO SHOW BASIC FUNCTION OF CLASS.
#include<iostream>
using namespace std;
class a{
    public:
    string name;
    int age;
    string address;
    void call(){
        cout<<"Enter your name:-";
        cin>>name;
        cout<<"Enter your age:-";
        cin>>age;
        cout<<"Enter your address:-";
        cin>>address;
    }
};
int main()
{
    a r;
    r.call();
    return 0;
}