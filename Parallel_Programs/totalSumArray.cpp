#include <iostream>
using namespace std;

int main() {

    int arr[8] = {1,2,3,4,5,6,7,8};
    int total_sum = 0;

    #pragma omp parallel for num_threads(4) reduction(+:total_sum)
    for(int i=0; i<8; i++){
        total_sum+=arr[i];
    }

    cout << "Total Sum = " << total_sum;

    return 0;
}



//using Critical --> Every thread has to wait for other threads before modifying sum

//using Reduction --> Each thread works on its own copy: