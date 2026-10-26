/*
5. Lambda with a Captured Variable

Use the lambda concept from the introductory example, where a variable is captured by value, such as [factor]. 

Create a vector of integers and use a lambda to multiply every element by a user-defined factor.

For example:

text
factor = 5
[5, 10, 15, 20] → [25, 50, 75, 100]

Use std::for_each and try the operation with both seq and par.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    // Create vector
    vector<int> arr = {5, 10, 15, 20};

    // User-defined factor
    int factor;

    cout << "Enter factor: ";
    cin >> factor;

    // ---------------- SEQUENTIAL ----------------

    auto start_seq = high_resolution_clock::now();

    for_each(
        execution::seq,
        arr.begin(),
        arr.end(),
        [factor](int &x)
        {
            x = x * factor;
        }
    );

    auto end_seq = high_resolution_clock::now();

    auto seq_time =
        duration_cast<microseconds>(end_seq - start_seq).count();


    // Reset vector
    arr = {5, 10, 15, 20};


    // ---------------- PARALLEL ----------------

    auto start_par = high_resolution_clock::now();

    for_each(
        execution::par,
        arr.begin(),
        arr.end(),
        [factor](int &x)
        {
            x = x * factor;
        }
    );

    auto end_par = high_resolution_clock::now();

    auto par_time =
        duration_cast<microseconds>(end_par - start_par).count();


    // ---------------- OUTPUT ----------------

    cout << "\nResult: ";

    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << "\nSequential time: "
         << seq_time << " microseconds" << endl;

    cout << "Parallel time: "
         << par_time << " microseconds" << endl;

    return 0;
}