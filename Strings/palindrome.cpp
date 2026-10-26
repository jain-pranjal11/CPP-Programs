#include <iostream>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

char toLowerCase(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s <= e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
  
    return 1;
}

int main() {
    
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Your name is "<<name<<endl;

    int len = getLength(name);
    cout<<"Length is "<<len<<endl;

    isPalindrome(name,len);
    if(isPalindrome == 0){
        cout<<name<<" not a Palindrome."<<endl;
    }
    else{
        cout<<name<<" is a Palindrome."<<endl;
    }
    

    return 0;
}