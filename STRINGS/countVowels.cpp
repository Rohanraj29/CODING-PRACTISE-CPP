// WAP TO COUNT NUMBER OF VOWELS IN A GIVEN STRING.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string value;
    int count = 0;
    cout << "Enter the string:-";
    getline(cin, value);
    for (int i = 0; i < value.length(); i++)
    {
        if (value[i] == 'a' || value[i] == 'e' || value[i] == 'i' || value[i] == 'o' || value[i] == 'u' || value[i] == 'A' || value[i] == 'E' || value[i] == 'I' || value[i] == 'O' || value[i] == 'U')
        {
            count++;
        }
    }
    cout << "Number of vowels in a given string is:-" << count;
    return 0;
}