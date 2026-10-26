#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){

    vector<int> nums = {2,3,5,2,5,2};

    //declaration of unordered map
    unordered_map<int,int> mp;

    //count frequency
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }

    //find maximum frequency and element
    int maxFreq = 0;
    int maxEle = 0;

    for(auto x:mp){
        if(x.second > maxFreq){       //c++ provides x.first --> element  and x.second --> freq
            maxFreq = x.second;
            maxEle = x.first;
        }
    }

    cout << "Element with maximum frequency: " << maxEle << endl;

    cout << "Maximum frequency: " << maxFreq << endl;

    return 0;
}