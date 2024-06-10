//WAP TO FIND MAXIMUM ELEMENT IN 2 D ARRAY.
#include <iostream>
using namespace std;
int main()
{
int a[2][2];
int min=a[0][0];
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
        if(min>a[i][j]){
            min=a[i][j];
        }
    }
}
    cout<<"Smallest element in 2d array are:-"<<min;
    return 0;
}