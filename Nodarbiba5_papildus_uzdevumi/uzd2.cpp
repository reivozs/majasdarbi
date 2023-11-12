#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Clear all file content
    remove("file1.txt");
    remove("file2.txt");
    remove("file3.txt");

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
    {
        if (j % 2 != 0)
        {
            fstream oddNumberFile("file1.txt", ios::app);
            oddNumberFile << j << " ";
            oddNumberFile.close();
        }
        else
        {
            fstream evenNumberFile("file2.txt", ios::app);
            evenNumberFile << j << " ";
            evenNumberFile.close();
        }

        int divisorCount = 0;
        bool primeNumber = true;
        if (j > 1)
        {
            for (int i = 1; i <= j; i++)
            {
                if (j % i == 0)
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
        if (primeNumber)
        {
            fstream primeNumberFile("file3.txt", ios::app);
            primeNumberFile << j << " ";
            primeNumberFile.close();
        }
    }
}