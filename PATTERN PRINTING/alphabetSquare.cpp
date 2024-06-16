//WAP TO PRINT ALPHABET SQUARE PATTERN
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        char ch='A';
        char ch=65; //ANOTHER METHOD WE CAN TYPE-CASTING THE INTEGER TO CHARACTER.
        for(int j=1;j<=4;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}

