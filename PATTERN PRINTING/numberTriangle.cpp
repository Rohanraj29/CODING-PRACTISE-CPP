//WAP TO PRINT NUMBER TRIANGLE PATTERN.
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}