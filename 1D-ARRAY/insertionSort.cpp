//WAP TO SHOW INSERTION SHORT.
#include<iostream>
using namespace std;
int main()
{
int a[4]={8,6,2,4};
for(int i=0;i<4;i++){
for(int j=i+1;j<4;j++){
if(a[i]>a[j]){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
}
cout<<"Array in sorted manner are as:-";
cout<<a[i]<<endl;
}
return 0;
}