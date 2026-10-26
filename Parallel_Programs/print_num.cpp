#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    
    omp_set_num_threads(5);

    #pragma omp parallel for
    for(int i=1; i<=10; i++){
        int thread_id = omp_get_thread_num();
        #pragma omp critical  //to get clean output
        cout << i << " Thread Id: " << thread_id << endl;
    }
    

    return 0;
}