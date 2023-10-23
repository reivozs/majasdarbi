#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{

    string teksts = "Programmas ir jaraksta cilvekiem, kas tas lasis!";

    cout << "1: Ievadīt jaunu tekstu (parastie burti)" << endl;
    cout << "2: Pasaka vai ievadītā teksta garums ir pāra vai nepāra skaitlis" << endl;
    cout << "3: Izvada summu no 1..n (kur n = teksta garums)" << endl;
    cout << "4: Atrod faktoriāli n (kur n = teksta garums)" << endl;
    cout << "5: Izvada virkni no otrā gala (reversā)" << endl;
    cout << "6: Beigt darbību" << endl;

    while (true)
    {
        int sum = 0;
        int res = 1;
        string jaunsTeksts;

        string input;
        getline(cin, input);

        try
        {
            int val = stoi(input); // Convert string to int, if input is intiger
            switch (val)
            {
            case 1:
                getline(cin, teksts);
                break;
            case 2:
                cout << ((teksts.length() % 2 == 0) ? "Teksta garums ir paara skaitlis" : "Teksta garums ir nepaara skaitlis") << endl;
                break;
            case 3:
                for (int i = 1; i <= teksts.length(); i++)
                {
                    sum += i;
                }
                cout << "Summa ir " << sum << endl;
                break;
            case 4:
                for (int i = 1; i <= teksts.length(); i++)
                {
                    res *= i;
                }
                cout << "Faktoriāls ir " << res << endl;
                break;
            case 5:
                for (int i = teksts.length() - 1; i >= 0; i--)
                {
                    jaunsTeksts += teksts[i];
                }
                cout << "Virkne reversā ir " << jaunsTeksts << endl;
                break;
            case 6:
                return 0;
            default:
                cout << "Ievadi skaitli no 1 - 6" << endl;
                break;
            }
        }
        catch (const invalid_argument &e)
        {
            cout << "Ievadi skaitli no 1 - 6" << endl;
        }
    }
    return 0;
}