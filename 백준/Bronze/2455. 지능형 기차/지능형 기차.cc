#include <iostream>

using namespace std;

int main()
{
    int in;
    int out;

    int Max = 0;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        cin >> out;
        cin >> in;
        sum += in - out;
        if (Max < sum)
            Max = sum;
    }

    cout << Max;
    return 0;
}