#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string a;
cout<<"Enter the string:-";
getline(cin,a);
for(int i=0;i<a.length();i++){
    if(a[i]%2==0){
        a[i]='a';
    }
        cout<<a[i];
}
}