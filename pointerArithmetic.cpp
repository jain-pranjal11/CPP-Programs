#include<iostream>
using namespace std;

int main(){

    int arr[] = {10,20,30,40};

    cout<<*arr<< endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;

    cout<<endl;

    int* ptr1;
    int* ptr2 = ptr1+2;
    cout<<ptr2-ptr1<<endl;
    cout<<ptr1-ptr2<<endl;


    return 0;
}