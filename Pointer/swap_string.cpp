#include <iostream>
using namespace std;

int main() {
    
    const char *S1 = "Pranjal Jain";
    const char *S2 = "Udyan Jain";

    cout << "--- Befor Swapping ---" << endl;
    cout << "String S1 = " << S1 << endl;
    cout << "String S2 = " << S2 << endl;

    const char *temp;
    temp = S1;
    S1 = S2;
    S2 = temp;

    cout << "--- After Swapping ---" << endl;
    cout << "String S1 = " << S1 << endl;
    cout << "String S2 = " << S2 << endl;
    
    return 0;
}