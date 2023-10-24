#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number1;
    int number2;

    cout << "First number: ";
    cin >> number1;
    cout << "Range: ";
    cin >> number2;

    for (int i = 1; i <= number2; i++)
    {
        cout << number1 << setw(4) << " * " << setw(3) << i << setw(4) << " = " << setw(3) << number1 * i << endl;
    }
}