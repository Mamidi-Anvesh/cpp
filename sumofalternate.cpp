#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }

    cout << "Sum of alternate elements (even index): " << sum;
    return 0;
}
