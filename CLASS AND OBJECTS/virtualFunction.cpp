//WAP TO SHOW THE VIRTUAL FUNCTION.
#include<iostream>
using namespace std;
class a{
    public:
   virtual void call(){
        cout<<"Sakshi kumari"<<endl;
    }
};
class b : public a {
    public:
    void call(){
        cout<<"Pihu Kumari"<<endl;
    }
};
int main()
{
    b s;
    s.call(); //PIHU KUMARI
    s.a::call();//SAKSHI KUMARI
    a *ss;
    ss=&s;
    ss->call();//PIHU KUMARI BECAUSE IN THAT CASE WE CAN WRITE VIRTUAL KEYWORD IN BASE CLASS.
    return 0;
}