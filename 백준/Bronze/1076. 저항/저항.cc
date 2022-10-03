#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string color[10] = { "black", "brown", "red", "orange", "yellow", 
        "green", "blue", "violet", "grey", "white" };

    string input_color;

    long long result = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> input_color;
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 && input_color == color[j])
            {
                result += 10 * j;
                break;
            }

            else if (i == 1 && input_color == color[j])
            {
                result += j;
                break;
            }

            else if (i == 2 && input_color == color[j])
            {
                result *= pow(10, j);
                break;
            }
        }
    }

    cout << result;
    return 0;
}