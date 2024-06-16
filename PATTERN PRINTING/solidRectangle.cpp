//WAP TO PRINT SOLID RECTANGLE PATTERN.
#include <iostream>
using namespace std;
 int main()
{
for(int i=1;i<=3;i++){ //OUTER LOOP FOR ROW
    for(int j=1;j<=5;j++){ //INNER LOOP FOR COLUMN.
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}

//USING FUNCTION
#include <iostream>
using namespace std;
void solidrectangle(){
    for(int i=1;i<=3;i++){ //OUTER LOOP FOR ROW
    for(int j=1;j<=5;j++){ //INNER LOOP FOR COLUMN.
        cout<<"*";
    }
    cout<<endl;
}
}
int main()
{
    solidrectangle();
    return 0;
}