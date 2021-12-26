#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
vector<string> divideString(string input, char *separator);
int n;
int *numbers;
int product = 1;
int nww;

int main()
{

    string in;
    getline(cin, in);
    n = stoi(in);

    numbers = new int[n];

    string input;
    getline(cin, input);

    char separator[] = " ";

    vector<string> inputVector = divideString(input, separator);

    for (int i = 0; i < n; i++)
    {
        numbers[i] = stoi(inputVector[i]);
    }

    for (int i = 0; i < n; i++)
    {
        product = product * numbers[i];
    }

    for (int i = 1; i <= product; i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            if (i % numbers[j] == 0)
            {
                sum++;
            }
        }

        if (sum == n)
        {
            nww = i;
            break;
        }
    }
    cout << nww;
    return 0;
}

vector<string> divideString(string input, char separator[])
{
    char inputCharArray[input.size()];
    strcpy(inputCharArray, input.c_str());

    char *token = strtok(inputCharArray, separator);
    vector<string> inputTokenized;

    while (token != NULL)
    {
        inputTokenized.push_back(token);
        token = strtok(NULL, separator);
    }

    return inputTokenized;
}