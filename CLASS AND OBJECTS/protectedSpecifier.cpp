//WAP TO SHOW PROTECTED ACCESS SPECIFIER.
#include<iostream>
using namespace std;
class a{
    protected:
    int r;
    int s;
};
class b :public a{
    public:
        void call(int x,int y){
            r=x;
            s= y;
        }
        void show(){
            cout<<r<<endl;
            cout<<s;
        }
    };
int main()
{
    b rr;
    rr.call(8,8);
    rr.show();
    return 0;
}