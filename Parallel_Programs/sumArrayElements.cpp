#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    int arr1[5] = {10,20,30,40,50};
    int arr2[5] = {10,20,30,40,50};
    int arr3[5];
    
    
    #pragma omp parallel for num_threads(5)
    
        for(int i=0; i<5; i++){
            arr3[i] = arr1[i] + arr2[i];

            #pragma omp critical //Without critical, multiple threads writing to cout at the same time can make the output harder to read.
            cout << "\nSum of arr[" << i << "] = " << arr3[i] << " (Thread no: " << omp_get_thread_num()<< ")" << endl;
        }cout << endl;
    
    

    return 0;
}