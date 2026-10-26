#include <iostream>
#include<algorithm>

using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int smallestIdx = i; //unsorted part starting
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestIdx])
                smallestIdx = j;
        }

        swap(arr[i],arr[smallestIdx]);
    }
}

int printArray(int arr[], int n){
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int n=5;
    int arr[] = {4,3,1,2,5};

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}