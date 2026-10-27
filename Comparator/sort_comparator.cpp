#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Declaring a comparator to sort in descending order
    bool myComp(int a, int b){
        return a > b;
    }

int main() {
    
    vector<int> arr = {3,2,6,1,8};

    sort(arr.begin(), arr.end(), myComp);

    //comparator using Lamda Function
    // sort(nums.begin(), nums.end(),
    //  [](int a, int b) {
    //      return a > b;
    //  });

    for(int num : arr){
        cout << num << " ";
    }
    
    return 0;
}