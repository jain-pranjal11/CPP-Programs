#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthlargestelement(vector<int> &arr, int k){

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0; i<arr.size(); i++){
        minHeap.push(arr[i]);

        if(minHeap.size() > k){
            minHeap.pop();
        }
    }

    return minHeap.top();
}


int main() {
    
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    int ans = kthlargestelement(arr, k);

    cout<<k<<"th largest element is "<<ans;

    return 0;
}