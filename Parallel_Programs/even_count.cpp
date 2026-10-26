#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    
    int cnt = 0;
    
    #pragma omp parallel for reduction(+:cnt)
    for(int i=0; i<=20; i++){
        if(i % 2 == 0){
            cnt++;
        }
    }

    for(int i=0; i<=20; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }

    cout << "\nTotal Even nos. are: " << cnt << endl;

    return 0;
}