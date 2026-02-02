#include <iostream>
using namespace std;

void selectionSortLargest(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int maxIndex = 0;

        // Find index of largest element in arr[0..i]
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap largest with element at position i
        swap(arr[maxIndex], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortLargest(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


