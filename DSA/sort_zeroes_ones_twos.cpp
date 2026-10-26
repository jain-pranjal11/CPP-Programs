#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,0,2,1,1,0,1,2,0,0};

    int n = sizeof(arr)/sizeof(arr[0]);
    int cnt_zero=0;
    int cnt_one=0;
    int cnt_two = 0;

    for(int i=0; i<n; i++){
        if (arr[i] == 0){
            cnt_zero++;
        }
        else if(arr[i] == 1){
            cnt_one++;
        }
        else{
            cnt_two++;
        }
    }
    // cout<<cnt_zero;
    // cout<<cnt_one;
    // cout<<cnt_two;

    int index=0;

    for(int i=0; i<cnt_zero; i++){
        arr[index++] = 0;
    }

    for(int i=0; i<cnt_one; i++){
        arr[index++] = 1;
    }

    for(int i=0; i<cnt_two; i++){
        arr[index++] = 2;
    }

    //print sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

