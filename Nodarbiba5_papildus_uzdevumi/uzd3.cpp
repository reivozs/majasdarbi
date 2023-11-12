#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infoFile("file4.txt");
    char chr;
    int charCount = 0;

    while (true)
    {
        infoFile.get(chr);
        if (chr != ' ' && chr != ',' && chr != '.' && chr != '\n' && chr != '-')
        {
            charCount += 1;
        }
        if (infoFile.eof())
        {
            break;
        }
    }
    cout << charCount;
}