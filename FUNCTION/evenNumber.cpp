//WAP TO PRINT EVEN NUMBER FROM 1 TO 20 USING CPP.
#include<iostream>
using namespace std;
void even(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}
int main()
{
    even(1,20);
    return 0;
}