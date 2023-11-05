#include <iostream>

using namespace std;

int sum(int num)
{
    if (num > 1)
    {
        return num + sum(num - 1);
    }
    else
    {
        return num;
    }
}

int main()
{

    int input;
    cin >> input;

    cout << sum(input);

    return 0;
}