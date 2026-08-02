// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

int calculateSum(int nums[], int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total = total + nums[i];
    }
    return total;
}

double calculateAverage(int nums[], int count) {
    return (double)calculateSum(nums, count) / count;
}

int calculateMax(int nums[], int count) {
    int biggest = nums[0];
    for (int i = 0; i < count; i++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }
    return biggest;
}

int calculateMin(int nums[], int count) {
    int smallest = nums[0];
    for (int i = 0; i < count; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return 0;
    }

    int numbers[100];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << "\nResults:" << endl;
    cout << "Sum:     " << calculateSum(numbers, n) << endl;
    cout << "Average: " << calculateAverage(numbers, n) << endl;
    cout << "Maximum: " << calculateMax(numbers, n) << endl;
    cout << "Minimum: " << calculateMin(numbers, n) << endl;

    return 0;
}

