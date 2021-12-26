#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
vector<string> divideString(string input, char *separator);
int n;
int *numbers;

int main()
{

    //cin >> n;
    n = 3;
    numbers = new int[n];

    //string input;
    //cin >> input;
    string input = "1 2 3";
    char separator[] = " ";

    vector<string> inputVector = divideString(input, separator);

    for (int i = 0; i < n; i++)
    {
        numbers[i] = stoi(inputVector[i]);
    }

    return 0;
}

vector<string> divideString(string input, char *separator)
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