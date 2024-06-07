//WAP TO SHOW THE PRIVATE ACCESS SPECIFIER IN CLAAS.
#include<iostream>
using namespace std;
class a{
    string name;
    int age;
    public:
    void call(string r,int b){
        name=r;
        age=b;
    }
    void show(){
        cout<<"Your name is "<<" "<<name<<endl;
        cout<<"Your age is "<<" "<<age;
    }
};
int main()
{
    a rr;
    rr.call("Rohan",19);
    rr.show();
    return 0;
}