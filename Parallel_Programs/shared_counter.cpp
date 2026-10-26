#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    
    omp_set_num_threads(5);
    int count = 0;

    //---- Here each thread performs 1000 increments ----
    #pragma omp parallel
    for(int i=0; i<1000; i++){
        #pragma omp critical
        count++;
    }

    cout << "Final counter = " << count << endl;

    //---- Here "parallel for" divides the 1000 iterations among the 5 threads ----
    int cnt = 0;
    #pragma omp parallel for     //The "parallel for" directive must be directly attached to the for loop.
    for(int i=0; i<1000; i++){
        #pragma omp critical
        cnt++;
    }

    cout << "Final counter = " << cnt;

    return 0;
}