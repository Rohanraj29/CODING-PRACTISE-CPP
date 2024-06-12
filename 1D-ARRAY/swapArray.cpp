//WAP TO SWAP FIRST AND LAST ELEMENTS OF AN ARRAY.
#include<iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    for(int i=0;i<4;i++){
        int temp=a[i];
        a[i]=a[4-1];
        a[4-1]=temp;
    cout<<a[i]<<endl;
    }
}