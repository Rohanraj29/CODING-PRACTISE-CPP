//WAP TO PRINT MAXIMUM ELEMENTS IN AN ARRAY.
#include<iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int max=a[0];
    for(int i=0;i<4;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"Maximum elements in a given array is:-"<<max;
    return 0;
}