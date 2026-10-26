#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"\n";
    //method-2
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