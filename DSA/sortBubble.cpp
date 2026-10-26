#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "How many elements do you want to enter?";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }


    //Bubble sort 
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
        
        cout<<"\nIteration "<<i+1<<": ";
        for (int k = 0; k < n; k++)
        {
        cout << arr[k]<<" ";
        }
        
    }
    
    cout<<"\n\nFinal Sorted Array: ";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    
    return 0;
}