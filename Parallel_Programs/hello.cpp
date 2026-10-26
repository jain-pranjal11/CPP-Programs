#include <iostream>
#include <omp.h>

using namespace std;

int main() {
    
    omp_set_num_threads(4);

    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        cout << "\nHello World from thread " << thread_id ;
        // cout << endl;
    }
    return 0;
}