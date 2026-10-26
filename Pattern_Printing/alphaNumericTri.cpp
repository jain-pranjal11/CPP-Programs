#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2 != 0){
                cout<<j<<" ";
            }
            else{
                int a=64;
                cout<<(char)(a+j)<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}