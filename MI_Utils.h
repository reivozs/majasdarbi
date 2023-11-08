#ifndef MI_UTILS_H
#define MI_UTILS_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <queue>

using namespace std;

namespace MI_Utils
{
    void createRow(vector<int> intVect)
    {
        stringstream stringsElements;

        for (int i : intVect)
        {
            stringsElements << i << " ";
        }

        int number;
        while (stringsElements >> number)
        {
            cout << "Elements: " << number << endl;
        }
    }

    void createStack(vector<int> intVect)
    {
        stack<int> intStack;
        for (int i : intVect)
        {
            intStack.push(i);
        }
        while (!intStack.empty())
        {
            cout << "Elements: " << intStack.top() << endl;
            intStack.pop();
        }
    }

    void createSet(vector<int> intVect)
    {
        set<int> intSet;
        for (int i : intVect)
        {
            intSet.insert(i);
        }
        for (int i : intSet)
        {
            cout << "Elements: " << i << endl;
        }
    }

    void createMap(vector<int> intVect, map<int, string> &intMap)
    {
        string stringInput;
        bool numberExist = false;

        for (int i = 0; i < intVect.size(); i++)
        {
            if (intMap.size() > 0)
            {
                // Check if next value exists in map
                for (auto j : intMap)
                {
                    if (intVect[i] == j.first)
                    {
                        numberExist = true;
                        break;
                    }
                }
                // if number is not found in map
                if (!numberExist)
                {
                    cout << "Tekstuala vertiba " << intVect[i] << ": ";
                    cin >> stringInput;
                    intMap[intVect[i]] = stringInput;
                }
                numberExist = false;
            }
            else
            {
                cout << "Tekstuala vertiba " << intVect[i] << ": ";
                cin >> stringInput;
                intMap[intVect[i]] = stringInput;
            }
        }

        int strInput;
        cout << "Ievadi kadu tekstualu skaitlis: ";
        cin >> strInput;

        for (auto i : intMap)
        {
            if (i.first == strInput)
            {
                cout << i.second << endl;
                return;
            }
        }
        cout << "Sada vertiba neeksiste" << endl;
    }

}

#endif
