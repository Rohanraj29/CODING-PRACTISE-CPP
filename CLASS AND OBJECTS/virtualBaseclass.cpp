//WAP TO SHOW VIRTUAL BASE CLASS.
//IN C++ VIRTUAL BASE CLASS IS A CONTEXT OF MULTILPLE INHERITANCE USED TO SOLVE DIAMOND PROBLEM WHICH OCCURS WHEN TWO 
//OR MORE CLASSES INHERIT FROM A COMMON BASE CLASS AND A DERIVED CLASS INHERIT FROM BASE CLASSES.
#include<iostream>
using namespace std;
class a{
    public:
    void call(){
        cout<<"Rahul Raj";
    }
};
class b :virtual public a{
};
class c :virtual public a{
};
class d :public b , public c{
};
int main()
{
    d r;
    r.call();
    return 0;
}