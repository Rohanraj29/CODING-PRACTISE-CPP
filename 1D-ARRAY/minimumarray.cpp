//WAP TO PRINT MINIMUM ELEMENTS IN AN ARRAY.
#include<iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int min=a[0];
    for(int i=0;i<4;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum elements in a given array is:-"<<min;
    return 0;
}