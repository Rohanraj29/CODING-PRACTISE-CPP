//WAP TO SHOW FUNCTION OVERRIDING.
//IT IS ALSO KNOWN AS OPERATOR OVERLOADING.
#include <iostream>
using namespace std;
class a{
    public:
    void call(){
        cout<<"Rahul Raj"<<endl;
    }
};
class b :public a{
    public:
    void call(){
        cout<<"Rohan Raj"<<endl;
    }
};
int main()
{
    b r;
    r.call();
    r.a::call();//NOW WE CAN ACCESAS  THE BASE CLASS USING SCOPE RESOLUTION OPERATOR.
    a *s;
    s=&r;
    s->call(); //NOW WE CAN ACCESS THE BASE CLASS USING POINTER.
    return 0;
}