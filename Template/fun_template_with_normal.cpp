// Function call will always prefer a noraml function in case of equality
#include <iostream>
using namespace std;

template <class T>
T greatest(T x, T y)
{
    cout << "Template function executed." << endl;
    return (x > y) ? x : y;
}

int greatest(int a, int b)
{
    cout << "Normal function executed." << endl;
    return (a > b) ? a : b;
}

int main()
{
    char choice = 'y';
    while (choice == tolower('y'))
    {
        int ch;
        cout << "\nFind the greatest number: " << endl;
        cout << "1. Among integer numbers: " << endl;
        cout << "2. Among float numbers: " << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            int a, b, maxI;
            cout << "Enter integer numbers: ";
            cin >> a >> b;
            maxI = greatest(a, b);
            cout << "The greatest no is: " << maxI << endl;
            break;

        case 2:
            float p, q, maxF;
            cout << "Enter float numbers: ";
            cin >> p >> q;
            maxF = greatest(p, q);
            cout << "The greatest no is: " << maxF << endl;
            break;

        default:
            cout << "You choose the invalid choice !" << endl;
        }

        cout << "Do you want to continue?(y/n)";
        cin >> choice;
    }

    return 0;
}