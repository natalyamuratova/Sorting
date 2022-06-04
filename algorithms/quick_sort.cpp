#include <algorithm>
#include "sorting.h"

// Быстрая сортировка.
// Временная сложность: в общем  случае - O(n log n), в худшем случае - O(n^2).

void quickSortImpl(int arr[], int l, int r);
int partition(int arr[], int l, int r);

void quickSort(int arr[], int n) {
    quickSortImpl(arr, 0, n-1);
}

void quickSortImpl(int arr[], int l, int r) {
    if (l < r) {
        int q = partition(arr, l, r);
        quickSortImpl(arr, l, q);
        quickSortImpl(arr, q + 1, r);
    }
}

int partition(int arr[], int l, int r) {
    int v = arr[(l + r) / 2];
    int i = l;
    int j = r;
    while (i <= j) {
        while (arr[i] < v) {
            i++;
        }
        while (arr[j] > v) {
            j--;
        }
        if (i >= j) {
            break;
        }
        std::swap(arr[i++], arr[j--]);
    }
    return j;
}