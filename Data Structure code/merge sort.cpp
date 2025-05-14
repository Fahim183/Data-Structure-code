#include <iostream>
using namespace std;

// Function to merge two halves of the array
void merge(int arr[], int low, int mid, int high)
{
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int left[leftSize], right[rightSize];

    for (int i = 0; i < leftSize; i++)
        left[i] = arr[low + i];

    for (int i = 0; i < rightSize; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = low;

    // Merge the two halves
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    // Copy remaining elements from left sub array
    while (i < leftSize)
        arr[k++] = left[i++];

    // Copy remaining elements from right sub array
    while (j < rightSize)
        arr[k++] = right[j++];
}

// Merge Sort function
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);       // Sort left half
        mergeSort(arr, mid + 1, high);  // Sort right half
        merge(arr, low, mid, high);     // Merge the sorted halves
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Perform Merge Sort
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}

