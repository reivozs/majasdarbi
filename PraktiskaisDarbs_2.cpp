#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <set>

using namespace std;

void enterNumbers(vector<int> &intVect);
void createRow(vector<int> intVect);
void createStack(vector<int> intVect);
void createSet(vector<int> intVect);
void printVector(vector<int> intVect);

int main()
{

    vector<int> intVect{4, 5, 6, 7, 8};

    enum inputChoices
    {
        inputChoice = 1,
        stringChoice,
        stackChoice,
        setChoice,
        printChoice,
        exitChoice
    };

    cout << "1: Ievadit skaitlus" << endl;
    cout << "2: Rinda" << endl;
    cout << "3: Steks" << endl;
    cout << "4: Set" << endl;
    cout << "5. Izvada skaitlu virkni" << endl;
    cout << "6. Beigt darbibu" << endl;

    while (true)
    {
        int input;
        cin >> input;

        switch (input)
        {
        case inputChoice:
            enterNumbers(intVect);
            break;
        case stringChoice:
            createRow(intVect);
            break;
        case stackChoice:
            createStack(intVect);
            break;
        case setChoice:
            createSet(intVect);
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

void enterNumbers(vector<int> &intVect)
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
                return;
            }
        }
    }
}

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

void printVector(vector<int> intVect)
{
    for (int i : intVect)
    {
        cout << i << " ";
    }
    cout << endl;
};
