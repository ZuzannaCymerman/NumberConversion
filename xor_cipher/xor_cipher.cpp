#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string XORCipher(string a, string b)
{
    string &longerString = (a.length() >= b.length()) ? a : b;
    string &shorterString = (a.length() < b.length()) ? a : b;
    string result = "";
    int numA = 0;
    int numB = 0;

    for (int i = 0; i < shorterString.length(); i++)
    {
        if ((a[i] >= 65) || (b[i] >= 65))
        {
            if ((a[i] >= 65) && (b[i] >= 65))
            {
                numA = a[i] - 87;
                numB = b[i] - 87;
            }
            else
            {
                const int &hexNum = (a[i] >= 65) ? a[i] : b[i];
                const int &intNum = (a[i] < 65) ? a[i] : b[i];
                numA = hexNum - 87;
                numB = intNum - 48;
            }
        }
        else
        {
            numA = a[i] - 48;
            numB = b[i] - 48;
        }

        int resInt = numA ^ numB;
        if (resInt >= 10)
        {
            char charRes = resInt + 87;
            result += charRes;
        }
        else
            result += to_string(resInt);
    }
    return result;
}

int main()
{

    cout << XORCipher("11", "22") << endl;
    cout << XORCipher("1020304", "403201") << endl;
    cout << XORCipher("c611d9bdd9de38b9eb", "23a0745505d4d25494") << endl;

    return 0;
}