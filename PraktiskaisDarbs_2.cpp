#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <set>
#include <map>

#include "MI_Utils.h"

using namespace std;

void enterNumbers(vector<int> &intVect, map<int, string> &intMap);
void createRow(vector<int> intVect);
void createStack(vector<int> intVect);
void createSet(vector<int> intVect);
void createMap(vector<int> intVect, map<int, string> &intMap);
void printVector(vector<int> intVect);

int main()
{

    vector<int> intVect{4, 5, 6, 7, 8};
    map<int, string> intMap;

    enum inputChoices
    {
        inputChoice = 1,
        stringChoice,
        stackChoice,
        setChoice,
        mapChoice,
        printChoice,
        exitChoice
    };

    cout << "1: Ievadit skaitlus" << endl;
    cout << "2: Rinda" << endl;
    cout << "3: Steks" << endl;
    cout << "4: Set" << endl;
    cout << "5: map" << endl;
    cout << "6: Izvada skaitlu virkni" << endl;
    cout << "7: Beigt darbibu" << endl;

    while (true)
    {
        int input;
        cin >> input;

        switch (input)
        {
        case inputChoice:
            enterNumbers(intVect, intMap);
            break;
        case stringChoice:
            MI_Utils::createRow(intVect);
            break;
        case stackChoice:
            MI_Utils::createStack(intVect);
            break;
        case setChoice:
            MI_Utils::createSet(intVect);
            break;
        case mapChoice:
            MI_Utils::createMap(intVect, intMap);
            break;
        case printChoice:
            printVector(intVect);
            break;
        case exitChoice:
            return 0;
        default:
            cout << "Ievadi skaitli no 1-6" << endl;
            break;
        }
    }
}

void enterNumbers(vector<int> &intVect, map<int, string> &intMap)
{
    int inputInt;
    intVect.clear();

    cout << "Ievadi katru skaitli atseviski. Lai beigtu, raksti 'end'" << endl;

    while (true)
    {
        if (cin >> inputInt)
        {
            intVect.push_back(inputInt);
        }
        else
        {
            cin.clear();
            string inputString;
            cin >> inputString;
            if (inputString == "end")
            {
                // If map has elements
                if (intMap.size() > 0)
                {
                    vector<int> mapValuesVect;
                    for (auto i : intMap)
                    {
                        mapValuesVect.push_back(i.first);
                    }
                    for (int i : mapValuesVect)
                    {
                        bool numberExist = false;
                        for (int j : intVect)
                        {
                            // if anymaps elements key equals to any vectors number
                            if (i == j)
                            {
                                numberExist = true;
                            }
                        }
                        if (!numberExist)
                        {
                            intMap.erase(i);
                        }
                        numberExist = false;
                    }
                }
                return;
            }
        }
    }
}

void printVector(vector<int> intVect)
{
    for (int i : intVect)
    {
        cout << i << " ";
    }
    cout << endl;
};
