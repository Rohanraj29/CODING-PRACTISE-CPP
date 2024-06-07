//WAP TO SHOW  PURE VIRTUAL FUNCTION.
#include<iostream>
using namespace std;
class a{
    public:
    virtual void call()=0;//WE KNOW THAT PURE VIRTUAL FUNCTION INITIALIED WITH 0.
};
class b :public a{
    public:
    void call(){
        cout<<"Rohan Raj";
    }
};
int main()
{
    b r;
    r.call();
    return 0;
}