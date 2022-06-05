#include "sorting.h"

// Сортировка слиянием.
// Временная сложность: в общем  случае - O(n log n).

void mergeSortImpl(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);

void mergeSort(int arr[], int n) {
    mergeSortImpl(arr, 0, n - 1);
}

void mergeSortImpl(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSortImpl(arr, l, mid);
        mergeSortImpl(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int* temp1 = new int[n1];
    int* temp2 = new int[n2];

    for (int i = 0; i < n1; i++) {
        temp1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        temp2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (temp1[i] <= temp2[j]) {
            arr[k] = temp1[i];
            i++;
        } else {
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = temp1[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = temp2[j];
        j++;
        k++;
    }

    delete[] temp1;
    delete[] temp2;
}