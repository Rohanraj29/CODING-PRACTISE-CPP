//WAP TO PROGRAM TO CALCULATE THE AREA OF CIRCLE.
#include<iostream>
using namespace std;
float area(int radius){
    float c=3.14*radius*radius;
    return c;
}
int main()
{
    cout<<area(8);
    return 0;
}