#include <iostream>
#include <string>

using namespace std;

void Print(int number)
{
    cout << number << endl;
}

void Print(string name)
{
    cout << name << endl;
}

void Print(double pi)
{
    cout << pi << endl;
}

void Print(char character)
{
    cout << character << endl;
}

int main()
{
    int number = 31;
    string name = "Raivo";
    double pi = 3.14;
    char character = 'C';

    Print(number);
    Print(name);
    Print(pi);
    Print(character);

    return 0;
}