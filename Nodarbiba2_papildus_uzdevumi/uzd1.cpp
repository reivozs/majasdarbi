#include <iostream>

using namespace std;

int main()
{

    int input = 0;
    cin >> input;

    int divisorCount = 0;
    bool primeNumber = true;

    if (input > 1)
    {
        for (int i = 1; i <= input; i++)
        {
            if (input % i == 0)
            {
                divisorCount++;
                if (divisorCount > 2)
                {
                    primeNumber = false;
                }
            }
        }
    }
    else
    {
        primeNumber = false;
    }

    cout << (primeNumber ? "Number is a prime number" : "Number is not prime number");

    return 0;
}