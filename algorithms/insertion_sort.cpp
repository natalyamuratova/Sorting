#include "sorting.h"

// Сортировка вставками.
// Временная сложность: в общем случае - O(n^2).

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int tmp = arr[i];
        int j = i;
        while (j > 0 && tmp < arr[j - 1]) {
            arr[j] = arr[j - 1];
            --j;
        }
        arr[j] = tmp;
    }
}