#include <algorithm>
#include <iostream>
#include "tasks.h"

void matchPairs(char nuts[], char bolts[], int low, int high);
int partition(char arr[], int low, int high, char pivot);
void printArray(char arr[], int n);

void nutsAndBoltsMatching() {
    const int N = 6;
    char nuts[N] = {'@', '#', '$', '%', '^', '&'};
    char bolts[N] = {'$', '%', '&', '^', '@', '#'};

    matchPairs(nuts, bolts, 0, N-1);

    std::cout <<"Matched nuts and bolts are : \n";

    printArray(nuts, N);
    printArray(bolts, N);
}

void matchPairs(char nuts[], char bolts[], int low, int high) {
    if (low < high) {
        int pivot = partition(nuts, low, high, bolts[high]);
        partition(bolts, low, high, nuts[pivot]);
        matchPairs(nuts, bolts, low, pivot);
        matchPairs(nuts, bolts, pivot + 1, high);
    }
}

int partition(char arr[], int low, int high, char pivot) {
    int i = low;
    int j = high;
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i >= j) {
            break;
        }
        std::swap(arr[i++], arr[j--]);
    }
    return j;
}

void printArray(char arr[], int n) {
    for(int i = 0; i < n; i++) {
        std::cout << " " <<  arr[i];
    }
    std::cout << "\n";
}