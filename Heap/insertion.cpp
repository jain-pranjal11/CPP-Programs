#include<iostream>
using namespace std;

class Heap{
    public:
        int arr[50];
        int size;
    
    Heap(){
        arr[1] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main(){

    Heap H;
    H.insert(51);
    H.insert(50);
    H.insert(55);
    H.insert(53);
    H.insert(52);
    

    H.print();

    return 0;
}