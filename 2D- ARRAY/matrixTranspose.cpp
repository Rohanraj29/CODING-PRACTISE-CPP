//WAP TO TRANSPOSE MATRIX MEANS THAT IF ARRAY ARE 1,2,3,4 THEN YOU SHOULD PRINT 1,3,2,4.
#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int transpose[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Array elements are:-"<<a[i][j]<<endl;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            transpose[i][j]=a[j][i];
        }
    }
    cout<<"After transpose array will be:-"<<endl;
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<" "<<transpose[i][j];
        }
    }
    return 0;
}