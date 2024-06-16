//WAP TO PRINT SOLID SQUARE PATTERN.
#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=4;i++){ //OUTER LOOP FOR ROW
    for(int j=1;j<=4;j++){ //INNER LOOP FOR COLUMN.
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}