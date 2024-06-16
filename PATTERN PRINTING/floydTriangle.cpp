//WAP TO PRING FLOYD TRIANGLE PATTERN.
#include<iostream>
using namespace std;
int main()
{
    int a=1; //DIFFERENT ROW DIFFERENT COLUMN OUTSIDE/ABOVE OUTER LOOP.
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}