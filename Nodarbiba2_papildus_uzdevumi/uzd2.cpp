#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    cin >> input;

    int sum = 0;

    for (int i = 0; i <= input; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}