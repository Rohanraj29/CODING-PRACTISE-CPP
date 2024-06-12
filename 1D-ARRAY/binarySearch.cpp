//WAP TO SHOW BINARY SEARCH.
#include<iostream>
using namespace std;
int main()
{
int a[8]={2,4,6,8,10,12,14,16};
int low=0;
int high=7;
int mid;
int f=0;
int search;
cout<<"Enter the element you want to search:-";
cin>>search;
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==search){
        f=1;
        break;
    }
    else
    if(mid<search){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
if(f==1){
    cout<<"Element found in a given array";
}
else{
    cout<<"Element not found in a given array";
}
return 0;
}