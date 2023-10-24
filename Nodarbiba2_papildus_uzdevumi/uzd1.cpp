#include <iostream>

using namespace std;

int main()
{

    int input = 0;
    cin >> input;

    int i = 2;
    bool primeNumber = true;

    if (input >= 0)
    {
        // 0 1 2 3 prime numbers
        while (primeNumber && (i != input - 1) && input > 3)
        {
            if (input % i == 0)
            {
                primeNumber = false;
            }
            i++;
        }
    }
    else
    {
        primeNumber = false;
    }

    cout << (primeNumber ? "Number is a prime number" : "Number is not prime number");

    return 0;
}