#include <iostream>
#include <climits>
#include <omp.h>

using namespace std;

int main() {

    int max = INT_MIN;
    int arr[7] = {10, 45, 23, 89, 12, 67, 34};

    #pragma omp parallel for reduction(max:max) 
    for(int i=0; i<7; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    cout <<"Maximum element is " << max << endl;

    return 0;
}

//without reduction race conditon will occur becoz each thread will try to update the value of max at the same type -> ouput may differ