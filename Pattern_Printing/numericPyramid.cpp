#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no of lines: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        int a = 1;
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n\n";
    // for(int i=1; i<=n; i++){
    //     int a = 1;
    //     for(int k=1; k<=n-i; k++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=a; j++){
    //         cout<<a<<" ";
    //         a+=2;
    //     }
    //     cout<<"\n";
    // }

   

    return 0;
}