#include<iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter the no of rows: ";
    cin>>r;
    cout<<"\nEnter the no of cols: ";
    cin>>c;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i == 1 || i == r || j == 1 || j == c)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}