#include <iostream>
using namespace std;

void print(int arr[], int n){
    cout << "Size of an array is " << n << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool linearSearch(int arr[], int size, int key){
    print(arr, size);
    //base case
    if(size == 0)
        return false;

    if(arr[0] == key)
        return true;

    else
        return linearSearch(arr+1, size-1, key);
}

int main() {
    
    int arr[5] = {3,6,5,9,1};
    int size = 5;
    int key = 0;

    bool ans = linearSearch(arr, size, key);

    if(ans)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}