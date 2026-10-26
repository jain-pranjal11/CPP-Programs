/* Create a vector of *1,000,000 integers*.

Use a lambda with std::for_each to add a fixed value, such as 10, to every element.

Run the operation using:

* std::execution::seq
* std::execution::par

Measure and compare the two execution times. */

#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    const int N = 1000000;
    const int VALUE = 10;

    // Create vector of 1,000,000 integers
    vector<int> arr(N, 0);

    // Sequential execution
    auto start_seq = high_resolution_clock::now();

    for_each(
        execution::seq,
        arr.begin(),
        arr.end(),
        [VALUE](int &x)
        {
            x += VALUE;
        }
    );

    auto end_seq = high_resolution_clock::now();

    auto seq_time =
        duration_cast<microseconds>(end_seq - start_seq).count();


    // Reset vector
    fill(arr.begin(), arr.end(), 0);


    // Parallel execution
    auto start_par = high_resolution_clock::now();

    for_each(
        execution::par,
        arr.begin(),
        arr.end(),
        [VALUE](int &x)
        {
            x += VALUE;
        }
    );

    auto end_par = high_resolution_clock::now();

    auto par_time =
        duration_cast<microseconds>(end_par - start_par).count();


    // Display results
    cout << "Sequential time: "
         << seq_time << " microseconds" << endl;

    cout << "Parallel time: "
         << par_time << " microseconds" << endl;

    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[N - 1] << endl;

    return 0;
}
