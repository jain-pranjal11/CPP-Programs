#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,4,5,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    //Insertion Sort
    for(int i=0; i<n-1; i++){ //no of passes
        int j = i+1;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}