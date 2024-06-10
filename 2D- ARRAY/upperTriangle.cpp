//WAP TO PRINT UPPER BOUND TRIANGLE.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter array elements:-";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Array elements are:-"<<a[i][j]<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(j>=i){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}