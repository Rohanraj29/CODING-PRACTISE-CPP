//WAP TO ADD TWO NUMBER USING FUNCTION.
//1ST WAY TO ADD NUMBER USING VOID KEYWORD.
//#include<iostream>
//using namespace std;
//void add(int a,int b){ //AGAR HUM VOID KEYWORD LIKHTE HAI TO FUNCTION KUCH V RETURN NHI KREGA ISKA MAATLABHOTA HAI NULL.
//    cout<<a+b;         //JIS TYPE KA FUNCTION HOGA USSI TYPE KA VALUE FUNCTION RETURN KREGA.                         
//}                      //AGAR FUNCTION KA RETURN TYPE VOID RHEGA TO USKO HUM KISI VARIABLE ME V STORE NHI KR SKTE.
//int main()
//{
//    add(4,4);
 //   return 0;
//}

//2ND WAY TO DECLARE FUNCTION USING INT KEYWORD.
#include<iostream>
using namespace std;
int add(int a,int b){
    int c=a+b;        //IN THIS WE CAN STORE A+B IN C VARIABLE THEN WE CAN RETURN C.
    return c;
    //return a+b;
}
int main()
{
    cout<<"Add:-"<<add(4,4);
    return 0;
}