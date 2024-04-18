#include <iostream>
using namespace std;

// Function to merge two arrays into a single sorted array
void merge(int a[], int b[], int p, int c[], int q) {
    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        if (b[i] <= c[j]) {
            a[k] = b[i];
            i++;
        } else {
            a[k] = c[j];
            j++;
        }
        k++;
    }

    while (i < p) {
        a[k] = b[i];
        i++;
        k++;
    }

    while (j < q) {
        a[k] = c[j];
        j++;
        k++;
    }
}

// Function to perform the merge sort
void mergeSort(int a[], int n) {
    if (n <= 1) {
        return; // Base case: if the array has 1 or fewer elements, it's already sorted
    }

    int mid = n / 2;
    int b[mid];
    int c[n - mid];

    // Copy elements to two temporary arrays
    for (int i = 0; i < mid; i++) {
        b[i] = a[i];
    }
    for (int i = mid; i < n; i++) {
        c[i - mid] = a[i];
    }

    // Recursively sort the two halves
    mergeSort(b, mid);
    mergeSort(c, n - mid);

    // Merge the sorted halves back into the original array
    merge(a, b, mid, c, n - mid);
    
}

int main() {
    int n;
    cout << "Enter the total number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    mergeSort(a, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
