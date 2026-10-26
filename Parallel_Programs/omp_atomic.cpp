#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    
    int cnt = 0;

    omp_set_num_threads(5);

    #pragma omp parallel
    for(int i=0; i<1000; i++){
        #pragma omp atomic
        cnt++;
    }

    cout << "Final counter = " << cnt ;

    return 0;
}

/*
#pragma omp atomic
count++;

✅ Good use of atomic.

But:

#pragma omp atomic
{
    count++;
    cout << count;
}

❌ atomic cannot protect an arbitrary block.

For that, use:

#pragma omp critical
{
    count++;
    cout << count;
}

"Why use atomic when critical also prevents race conditions?"

Atomic is used for simple operations on a shared variable, such as increment or decrement. Critical is used when multiple statements or a larger section of code must be protected. Atomic provides a more specific and usually lower-overhead synchronization mechanism for supported operations.
*/