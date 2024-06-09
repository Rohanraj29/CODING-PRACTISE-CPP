//WAP TO SHOW THE BASIC DECLERATION OF POINTER.
#include<iostream>
using namespace std;
int main()
{
    int a=8;
    int *p1=&a;//IT CAN STORE THE ADDRESS OF A VARIABLE.IF WE WANT TO ACCESS THE ADDRESS OF A VARIABLE
               //THEN WE CAN ACCESS THEM IN FOLLOWING WAYS:-
    cout<<&a<<endl;
    cout<<p1<<endl;
    //IF WE WANT TO ACCESS THE VALUE OF A VARIABLE
               //THEN WE CAN ACCESS THEM IN FOLLOWING WAYS:-
    cout<<a<<endl;
    cout<<*p1<<endl;
    return 0;
}