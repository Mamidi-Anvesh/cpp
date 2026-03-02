#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int low, int high) {
    
    int pivot = arr[high];
    
    int i = (low - 1);    

    for (int j = low; j < high; j++) {
        
        if (arr[j] <= pivot) {
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
int partition_random(int arr[] , int low , int high ){
    int r=(low+high)/2;
    swap(&arr[r],&arr[high]);
    return partition(arr, low, high);
    
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {

        int pi = partition_random(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << std::endl;
}

int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);
    
    cout << "Unsorted Array: ";
    printArray(data, n);
    
    quickSort(data, 0, n - 1);
    
    cout << "Sorted Array:   ";
    printArray(data, n);
    
    return 0;
}