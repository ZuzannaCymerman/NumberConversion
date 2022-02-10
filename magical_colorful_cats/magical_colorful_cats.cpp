#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
// 1-2, 2-3, 3-4, n-1
// W R G

int main()
{
    string input;
    char allColors[3] = {'R', 'W', 'G'};
    getline(cin, input);
    char stepsAndCats[input.size()];
    strcpy(stepsAndCats, input.c_str());
    int cats = (int)(stepsAndCats[0] - 48);
    int steps = (int)(stepsAndCats[2] - 48);

    getline(cin, input);
    char colors[input.size()];
    strcpy(colors, input.c_str());
    for (int s = 0; s < steps; s++)
    {
        for (int c = 0; c < cats; c++)
        {
            for (int i = 0; i < 3; i++)
            {
                int k;
                if (c < cats - 1)
                {
                    k = c + 1;
                }
                else
                {
                    k = 0;
                }
                if (colors[c] != colors[k])
                {
                    if ((allColors[i] != colors[c]) && (allColors[i] != colors[k]))
                    {
                        colors[c] = allColors[i];
                        colors[k] = allColors[i];
                    }
                }
            }
        }
    }
    cout << colors << endl;

    return 0;
}