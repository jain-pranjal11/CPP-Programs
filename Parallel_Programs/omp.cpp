#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    
    omp_set_num_threads(5);

    #pragma omp parallel
    #pragma omp critical
    cout << omp_get_thread_num() << ", Total Threads -> " << omp_get_num_threads() << endl;

    return 0;
}