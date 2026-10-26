#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int singleNumber(vector<int>&nums){
            int ans = 0;
            for(int val : nums){
                ans ^= val;
            }

            return ans;
        }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 1, 3, 4, 4, 2};

    // Call singleNumber using the class object 's' and pass 'nums'
    cout << "Single number is: " << s.singleNumber(nums) << endl;

    return 0;
}