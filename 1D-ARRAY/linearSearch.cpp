//WAP TO IMPLEMENT LINEAR SEARCH.
#include<iostream>
using namespace std;
int main()
{
    int a[4]={2,4,6,8};
    int search;
    int flag;
    cout<<"Enter the elements that you want to search:-";
    cin>>search;
    for(int i=0;i<4;i++){
        if(a[i]==search){
          flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found in a given array ";
    }
    else{
        cout<<"Element not found in a given aaray ";
    }
    return 0;
}