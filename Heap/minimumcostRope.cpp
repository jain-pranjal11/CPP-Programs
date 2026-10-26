#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Rope{
    public:
        int minCost(vector<int> &arr){

            priority_queue<int, vector<int>,greater<int>> minHeap;

            for(int i=0; i<arr.size(); i++){
                minHeap.push(arr[i]);
            }

            int cost = 0;

            while(minHeap.size() > 1){
                int first = minHeap.top();
                minHeap.pop();

                int second = minHeap.top();
                minHeap.pop();

                int sum = first + second;

                cost+=sum;

                minHeap.push(sum);
            }

            return cost;

        }
    
};

int main() {
    
    vector<int> arr = {4,3,2,6};
    Rope rope;
    
    int ans = rope.minCost(arr);

    cout << "Minimum cost of Rope is "<<ans;

    return 0;
}