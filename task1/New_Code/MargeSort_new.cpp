#include<iostream>
#include<vector>
using namespace std;

// Function to merge two sorted subarrays into one sorted array
void merge(int arr[], int startIndex, int midIndex, int endIndex) {
    vector<int> mergedArray; // Vector to store the merged result
    int leftPtr = startIndex; // Pointer for the left subarray
    int rightPtr = midIndex + 1; // Pointer for the right subarray

    // Merge the elements of both subarrays in sorted order
    while(leftPtr <= midIndex && rightPtr <= endIndex) {
        if(arr[leftPtr] <= arr[rightPtr]) {
            mergedArray.push_back(arr[leftPtr]);
            leftPtr++;
        } else {
            mergedArray.push_back(arr[rightPtr]);
            rightPtr++;
        }
    }

    // Add any remaining elements from the left subarray
    while(leftPtr <= midIndex) {
        mergedArray.push_back(arr[leftPtr]);
        leftPtr++;
    }

    // Add any remaining elements from the right subarray
    while(rightPtr <= endIndex) {
        mergedArray.push_back(arr[rightPtr]);
        rightPtr++;
    }

    // Copy the merged array into the original array
    for(int i = 0, currentIdx = startIndex;
        currentIdx <= endIndex; i++, currentIdx++) {

        arr[currentIdx] = mergedArray[i];
    }
}

// Function to perform merge sort on the array
void mergeSort(int arr[], int startIndex, int endIndex) {
    // Base condition
    if(startIndex >= endIndex) {
        return;
    }

    // Calculate the midpoint to divide the array into two halves
    int midIndex = startIndex + (endIndex - startIndex) / 2;

    // Recursively sort the left half
    mergeSort(arr, startIndex, midIndex);

    // Recursively sort the right half
    mergeSort(arr, midIndex + 1, endIndex);

    // Merge the two sorted parts of the array
    merge(arr, startIndex, midIndex, endIndex);
}

int main() {
    int arraySize;
    cout << "Enter array size: ";
    cin >> arraySize;

    // Declare the array with the given size
    int arr[arraySize];

    // Input the elements of the array
    cout << "Enter the numbers: " << endl;
    for(int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    // Call the mergeSort function to sort the array
    mergeSort(arr, 0, arraySize - 1);

    // Output the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
