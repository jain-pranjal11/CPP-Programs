#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string& s, int i, int j){
    //base case
    if(i > j)
        return true;

    if(s[i] != s[j])
        return false;
    else
        return checkPalindrome(s,i+1,j-1);  
}

int main() {
    
    string name = "mala";
    cout << "String is " << name << endl;

    bool isPalindrome = checkPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }

    return 0;
}