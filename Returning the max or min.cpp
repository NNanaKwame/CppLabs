#include <iostream>

using namespace std;

// Function to find the largest number in an array
int findLargestNumber(int* arr, int size) {
    // Initialize the largest number as the first element
    int largest = *arr;

    // Iterate through the array elements
    for (int i = 1; i < size; i++) {
        // Check if the current element is larger than the largest
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }

    return largest;
}

int findSmallestNumber(int* arr, int size) {
    // Initialize the smallest number as the first element
    int smallest = *arr;

    // Iterate through the array elements
    for (int i = 1; i < size; i++) {
        // Check if the current element is smaller than the smallest
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
    }

    return smallest;
}

int main() {
    int size;
    cout << "Enter the size of the array: "<<endl;
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the array elements: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    // Find the largest number in the array
    int largest = findLargestNumber(arr, size);
    int smallest = findSmallestNumber(arr, size);

    cout << "The largest number in the array is: " << largest << endl;
    cout << "The smallest number in the array is: " << smallest << endl;

    delete[] arr;  // Free the dynamically allocated memory

    return 0;
}
