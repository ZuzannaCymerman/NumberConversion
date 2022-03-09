#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string XORCipher(string a, string b)
{
    string &longerString = (a.length() >= b.length()) ? a : b;
    string &shorterString = (a.length() < b.length()) ? a : b;
    string result = "";
    for (int i = 0; i < shorterString.length(); i++)
    {
        int numA = (a[i] - 48);
        int numB = (b[i] - 48);
        result += to_string(numA ^ numB);
    }

    return result;
}

int main()
{
    cout << XORCipher("11", "22") << endl;
    cout << XORCipher("1020304", "403201") << endl;
    return 0;
}