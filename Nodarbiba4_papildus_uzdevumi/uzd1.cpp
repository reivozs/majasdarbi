#include <iostream>
#include <string>

using namespace std;

string reverseString(string input)
{
    string reversedInput = "";
    for (int i = input.length(); i >= 0; i--)
    {
        reversedInput += input[i];
    }
    return reversedInput;
}

int main()
{
    string input;

    getline(cin, input);

    cout << reverseString(input);

    return 0;
}