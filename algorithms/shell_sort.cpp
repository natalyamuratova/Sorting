#include "sorting.h"

// Сортировка Шелла.
// Временная сложность: в общем случае - O(n^2).

void shellSort(int arr[], int n) {
    int step = n / 2;
    while (step > 0) {
        for (int i = step; i < n; i++) {
            int x = arr[i];
            int j = i - step;
            while (j >= 0 && x < arr[j]) {
                arr[j + step] = arr[j];
                j -= step;
            }
            arr[j + step] = x;
        }
        step /= 2;
    }
}

/*
void shellSort(int arr[], int n) {
    int j;
    int step = n / 2;
    while (step > 0) {
        for (int i = 0; i < n - step; i++) {
            j = i;
            while (j >= 0 && arr[j] > arr[j + step]) {
                int tmp = arr[j];
                arr[j] = arr[j + step];
                arr[j + step] = tmp;
                j -= step;
            }
        }
        step = step / 2;
    }
}
*/