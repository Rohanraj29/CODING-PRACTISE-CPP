//WAP TO PRINT REVERSE STAR TRIANGLE PATTERN.
#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=4;i++){
    for(int j=4;j>=i;j--){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}