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

//void insertionSort(vector <int>& arr) {
//    int min_index=0;
//    for (int i = 0; i < arr.size() - 1; i++) {
//        min_index = i;
//        for (int j = i+1; j < arr.size(); j++) {
//            if (arr[j] < arr[min_index]) {
//                min_index = j;
//            }
//        }
//        swap(arr[min_index], arr[i]);
//    }
//}