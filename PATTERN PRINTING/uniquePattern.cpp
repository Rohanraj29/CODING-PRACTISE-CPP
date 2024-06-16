//WAP TO PRINT UNIQUE PATTERN.
//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4
#include<iostream>
using namespace std;
int main()
{
    int a=0;
    for(int i=1;i<=4;i++){
   
        a++;
        for(int j=1;j<=4;j++){
            cout<<a;
        }
        cout<<endl;
    }
}