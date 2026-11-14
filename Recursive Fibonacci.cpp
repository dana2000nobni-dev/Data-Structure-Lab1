#include <iostream>
#include <chrono> // For measuring execution time

using namespace std;
using namespace std::chrono;

// Recursive Fibonacci function
long long fib(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    long long n;

    // Ask the user for a number
    cout << "Enter the Fibonacci number n you want to calculate: ";
    cin >> n;

    cout << "Calculating fib(" << n << ")..." << flush;

    // Start timer
    auto start = high_resolution_clock::now();

    // Call the recursive function
    long long result = fib(n);

    // Stop timer
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);

    // Print the result and execution time
    cout << "\nResult: " << result << endl;
    cout << "Execution time: " << duration.count() << " seconds" << endl;

    return 0;
}