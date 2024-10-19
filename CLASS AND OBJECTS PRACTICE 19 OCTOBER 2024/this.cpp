#include <iostream>
using namespace std;
class details{
    public:
    string name;
    int age;
    details(string name,int age){
        this->name=name;
        this->age=age;
    }
    void call(){
        cout<<name<<" "<<age;
    }
};
int main()
{
  details rahul ("Rahul",19);
  details rohan ("Rohan",18);
  rahul.call();
  rohan.call();
}