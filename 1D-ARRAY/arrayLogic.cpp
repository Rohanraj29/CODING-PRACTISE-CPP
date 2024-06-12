//Given an array of marks of students, if the mark of any student is less than 35 print its roll
//number. [roll number here refers to the index of the array.]

#include<iostream>
using namespace std;
int main()
{
    int a[4]={34,88,32,98};
    for(int i=0;i<4;i++){
        if(a[i]<35){
            cout<<i<<endl;
        }
    }
    return 0;
}