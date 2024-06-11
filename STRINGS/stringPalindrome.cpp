//WAP TO CHECK WHETHER A GIVEN STRING IS PALINDROME OR NOT.
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
string a;
cout<<"Enter the string that you want to check it is palindrome or not:-";
getline(cin,a);
string b=a;
reverse(a.begin(),a.end());
if(a==b){
    cout<<"It is a palindrome";
}
else{
    cout<<"It is not a palindrome";
}
    return 0;
}