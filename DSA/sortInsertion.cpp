#include <iostream>
#include<algorithm>

using namespace std;

void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >=0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        
        arr[prev+1] = curr; //placing the current elementn in its correct position 
    }
}


void printArray(int arr[], int n){
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}


int main(){
    int n=5;
    int arr[] = {4,3,1,2,5};

    insertionSort(arr,n);
    printArray(arr,n);

    return 0;
}