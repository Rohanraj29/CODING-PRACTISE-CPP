// WAP TO PRINT NUMBER SQUARE PATTERN.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++) //NO OF ROW SAME BUT COLUMN DIFFERENT WE CAN DECLARE INSIDE THE OUTER LOOP.
    {
        int a = 1;
        for (int j = 1; j <= 4; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}