#include <iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}


int main() {
    
    int n; 

    cout << "Which fibonacci term do you want? ";
    cin >> n;

    int ans = fibonacci(n);

    cout << n << "th term of fibonacci is: " << ans << endl;

    return 0;
}