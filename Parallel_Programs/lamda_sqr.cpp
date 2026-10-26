/*
Create a vector containing values from 1 to 1,000,000.

Write a lambda that performs:

text
x = sqrt(x) + 1

Apply it using std::for_each.
Run the program using both *sequential and parallel execution policies* and display the execution times.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <cmath>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    const int N = 1000000;

    // Create vector containing values from 1 to 1,000,000
    vector<double> arr(N);

    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }

    // ---------------- SEQUENTIAL ----------------

    auto start_seq = high_resolution_clock::now();

    for_each(
        execution::seq,
        arr.begin(),
        arr.end(),
        [](double &x)
        {
            x = sqrt(x) + 1;
        }
    );

    auto end_seq = high_resolution_clock::now();

    auto seq_time =
        duration_cast<microseconds>(end_seq - start_seq).count();


    // Reset vector to values 1 to 1,000,000
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }


    // ---------------- PARALLEL ----------------

    auto start_par = high_resolution_clock::now();

    for_each(
        execution::par,
        arr.begin(),
        arr.end(),
        [](double &x)
        {
            x = sqrt(x) + 1;
        }
    );

    auto end_par = high_resolution_clock::now();

    auto par_time =
        duration_cast<microseconds>(end_par - start_par).count();


    // ---------------- OUTPUT ----------------

    cout << "Sequential time: "
         << seq_time << " microseconds" << endl;

    cout << "Parallel time: "
         << par_time << " microseconds" << endl;

    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[N - 1] << endl;

    return 0;
}