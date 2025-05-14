#include <iostream>
using namespace std;

int partition(int a[], int start, int end) {
    int pivot = a[start]; // First element as pivot
    int pos = start;

    for (int i = start + 1; i <= end; i++) {
        if (a[i] < pivot) {
            pos++;
            swap(a[i], a[pos]);
        }
    }
    swap(a[start], a[pos]); // Place pivot in correct position
    return pos; // Return pivot index
}

void quicksort(int a[], int start, int end) {
    if (start >= end)
        return;
    int pivot = partition(a, start, end);
    quicksort(a, start, pivot - 1); // Sort left part
    quicksort(a, pivot + 1, end);   // Sort right part
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter all elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
