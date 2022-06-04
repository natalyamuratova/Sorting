#include <iostream>
#include "algorithms/sorting.h"
#include "examples/tasks.h"

using std::cout;

void print(int values[], int n);
void initArray(int values[], int n);

int main() {
    const int N = 10;
    int arr[N];
    initArray(arr, N);

    print(arr, N);
//    insertionSort(arr, N);
//    shellSort(arr, N);
    quickSort(arr, N);
    print(arr, N);

//    nutsAndBoltsMatching();

    return 0;
}

void initArray(int values[], int n) {
    for (int i = 0; i < n; i++) {
        values[i] = n - i;
    }
}

void print(int values[], int n) {
    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }
    cout << "\n";
}