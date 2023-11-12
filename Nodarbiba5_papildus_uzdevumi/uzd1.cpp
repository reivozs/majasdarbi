#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string input;

    cout << "Ievadiet tekstu: ";
    getline(cin, input);

    ofstream newFile("file_users_input.txt");
    newFile << input;
    newFile.close();
}