#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8};

    #pragma omp parallel for
    for(int i=0; i<8; i++){
        arr[i] = arr[i] * arr[i];
        #pragma omp critical
        cout << arr[i] << " ";
    }

    return 0;
}