#include<iostream>
using namespace std;

int main(){

    int arr[] = {20,2,8,76,10,40,50,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //array before sorting
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    //Bubble Sort algorithm (array after sorting) 
    for(int i=0; i<n-1; i++){
        bool swapped = false;

        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swapped = true;
        }
         if(!swapped) break;
    }
  

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}