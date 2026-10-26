#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallestElement(vector<int> &arr, int k){

    priority_queue<int> maxHeap;

    for(int i=0; i<arr.size(); i++){

        maxHeap.push(arr[i]);

        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    
    return maxHeap.top();
}


int main() {
    
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;

    int ans = kthSmallestElement(arr,k);
    cout<<k<<"th smallest element is "<<ans;

    return 0;
}