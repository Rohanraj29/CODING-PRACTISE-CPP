//WAP TO PRINT SUM OF ALL ELEMENTS IN AN ARRAY.
#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int sum=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    cout<<"Array elements are:-"<<endl;
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    for(int i=0;i<4;i++){
        sum=sum+a[i];
    }
    cout<<"Sum of all elements in array are:-"<<sum;
    return 0;
}