// WAP TO UPDATE EVEN POSITION OF A STRING.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string ab;
    cout << "Enter the string:-";
    getline(cin, ab);
    for (int i = 0; i < ab.length(); i++)
    {
        if (i % 2 == 0)
        {
            ab[i] = 'a';
        }
    }
    cout << "Updated string:-" << ab;
    return 0;
}
