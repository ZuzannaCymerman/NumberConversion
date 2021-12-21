#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>
using namespace std;
//n = d0  + r * d1 + r2 * d2 + r3 * d3 + ...

char convertNumber(int number)
{
    char numChar;
    if (number > 10)
    {
        numChar = char(number + 55);
    }
    else
    {
        numChar = char(number + 48);
    }

    return numChar;
}

int numberToDecimal(string numberString, int base)
{
    char numberCharArray[numberString.length()];
    strcpy(numberCharArray, numberString.c_str());
    int decimalNumber;
    int dec = 0;
    int power = numberString.length() - 1;
    for (unsigned long i = 0; i < numberString.length(); i++)
    {
        int ASCIINumber = int(numberCharArray[i]);
        if (ASCIINumber < 65)
        {
            decimalNumber = ASCIINumber - 48;
        }
        else
        {
            decimalNumber = ASCIINumber - 55;
        }
        dec += decimalNumber * pow(base, power);
        power = power - 1;
    }

    return dec;
}

int main()
{
    int number;
    int base;
    int newBase;

    vector<char> digits;
    cout << "Please type in your number, base, and a new base (like: 255 10 2): ";
    string input;
    getline(cin, input);
    char inputCharArray[input.size()];
    strcpy(inputCharArray, input.c_str());

    char *token = strtok(inputCharArray, " ");
    vector<string> inputTokenized;

    while (token != NULL)
    {
        inputTokenized.push_back(token);
        token = strtok(NULL, " ");
    }

    base = stoi(inputTokenized[1]);
    newBase = stoi(inputTokenized[2]);
    number = numberToDecimal(inputTokenized[0], base);

    while (number / newBase)
    {
        int digit = number % newBase;
        number = number / newBase;
        digits.push_back(convertNumber(digit));
        if (number / newBase == 0)
        {
            int digit = number % newBase;
            number = number / newBase;
            digits.push_back(convertNumber(digit));
            break;
        }
    }
    string s;
    for (int i = digits.size(); i >= 0; i--)
    {
        s += digits[i];
    }

    cout << "The number is:" << s;

    return 0;
}
