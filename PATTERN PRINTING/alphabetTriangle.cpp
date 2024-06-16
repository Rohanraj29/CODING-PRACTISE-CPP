//WAP TO PRINT ALPHABET TRIANGLE AFTER TAKING AN INPUT FROM THE USER.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        char a=65;
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}