#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    //method-1
    for(int i=1; i<=n; i++){
        for(int j=65; j<n+65; j++){
            cout<<(char)j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    //method-2
    for(int i=1; i<=n; i++){
        int var = 65;
        for(int j=1; j<=n; j++){
            cout<<(char)var<<" ";
            var++;
        }
        cout<<"\n";
    }

    cout<<"\n";
    //To print triangle just change in the j loop (j<=i)
    for(int i=1; i<=n; i++){
        int var = 65;
        for(int j=1; j<=i; j++){
            cout<<(char)var<<" ";
            var++;
        }
        cout<<"\n";
    }
    return 0;
}