#include <iostream>
using namespace std;

template <class T>
T greatest(T a, T b, T c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
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
        cout << "3. Among double numebrs: " << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            int a, b, c, maxI;
            cout << "Enter integer numbers: ";
            cin >> a >> b >> c;
            maxI = greatest(a, b, c);
            cout << "The greatest no is: " << maxI << endl ;
            break;

        case 2:
            float p, q, r, maxF;
            cout << "Enter float numbers: ";
            cin >> p >> q >> r;
            maxF = greatest(p, q, r);
            cout << "The greatest no is: " << maxF << endl ;
            break;

        case 3:
            double x, y, z, maxD;
            cout << "Enter double numbers: ";
            cin >> x >> y >> z;
            maxD = greatest(x, y, z);
            cout << "The greatest no is: " << maxD << endl ;
            break;

        default:
            cout << "You choose the invalid choice !" << endl ;
        }

            cout << "Do you want to continue?(y/n)";
            cin >> choice;
    }
            

    return 0; 
}