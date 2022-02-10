#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <regex>

using namespace std;

int main()
{
    regex inputPattern("^[0-9]*\040[0-9]*$");
    string input;
    getline(cin, input);

    if (!regex_match(input, inputPattern))
    {
        cout << "Wrong input, please type 2 numbers divided by space" << endl;
        exit(0);
    }

    char inputCharArray[input.size()];
    strcpy(inputCharArray, input.c_str());

    char *token = strtok(inputCharArray, " ");
    vector<string> inputTokenized;

    while (token != NULL)
    {
        inputTokenized.push_back(token);
        token = strtok(NULL, " ");
    }

    string &longerString = (inputTokenized[0].length() >= inputTokenized[1].length()) ? inputTokenized[0] : inputTokenized[1];
    string &shorterString = (inputTokenized[0].length() < inputTokenized[1].length()) ? inputTokenized[0] : inputTokenized[1];

    int longerStringLength = longerString.length();
    int shorterStringLength = shorterString.length();
    char sumCharArray[longerStringLength + 2];
    fill(sumCharArray, sumCharArray + sizeof(sumCharArray), '0');
    sumCharArray[longerStringLength + 1] = '\0';

    for (int i = 0; i < longerStringLength / 2; i++)
        swap(longerString[i], longerString[longerStringLength - i - 1]);

    for (int i = 0; i < shorterStringLength / 2; i++)
        swap(shorterString[i], shorterString[shorterStringLength - i - 1]);

    for (int i = 0; i < longerStringLength; i++)
    {
        int sum;
        if (i < shorterStringLength)
        {
            sum = (int)(sumCharArray[i] - 48) + (int)(shorterString[i] - 48) + (int)(longerString[i] - 48);
        }
        else
        {
            sum = ((int)(sumCharArray[i] - 48) + (int)(longerString[i] - 48));
        }
        sumCharArray[i] = (sum % 10) + 48;
        sumCharArray[i + 1] = (sum / 10) + 48;
    }

    for (int i = 0; i < (longerStringLength + 1) / 2; i++)
        swap(sumCharArray[i], sumCharArray[longerStringLength - i]);
    if (sumCharArray[0] == '0')
    {
        for (int i = 0; i < longerStringLength + 1; ++i)
            sumCharArray[i] = sumCharArray[i + 1];
        sumCharArray[longerStringLength] = '\0';
    }

    cout << sumCharArray << endl;

    return 0;
}
