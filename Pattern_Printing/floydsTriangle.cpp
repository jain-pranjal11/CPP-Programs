#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int a = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<a<<" ";
            a+=1;
        }
        cout<<"\n";
    }

    //flyods triangle of odd nos 
    cout<<"\n";
    int b=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<b<<" ";
            b+=2;
        }
        cout<<"\n";
    }

    return 0;
}