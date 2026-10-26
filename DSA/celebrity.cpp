#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int celebrity(vector<vector<int>>& M, int n){
    stack <int> s;

    //Step 1: Push all people 
    for(int i=0; i<n; i++){
        s.push(i);
    }

    //Step 2: Eliminate people
    while(s.size() > 1){
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(M[a][b] == 1){
            s.push(b);
        }else{
            s.push(a);
        }
    }

    //Step 3: Get the only remaining candidate
    if(s.empty())
        return -1;

    int candidate = s.top();

    //Step 4: Verify the candidate
    for(int i=0; i<n; i++){
        if(i != candidate){
            if(M[candidate][i] == 1 || M[i][candidate] == 0)
                return -1;
        }
    }

    return candidate;
}

int main() {
    
    vector<vector<int>> M = {
        {0, 1, 1},
        {0, 0, 1},
        {0, 0, 0}
    };

    int n = M.size();

    cout << celebrity(M, n);

    return 0;
}