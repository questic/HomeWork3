#include <iostream>
#include "CArray.h"

int FindSmallestEvenOrOdd(const int* array, int size) {
    int smallestEven = INT32_MAX;
    int smallestOdd = INT32_MAX;

    for (int i = 0; i < size; ++i) {
        if (array[i] % 2 == 0 && array[i] < smallestEven) {
            smallestEven = array[i];
        } else if (array[i] % 2 != 0 && array[i] < smallestOdd) {
            smallestOdd = array[i];
        }
    }

    return smallestEven != INT32_MAX ? smallestEven : smallestOdd;
}

int SumOfMinAndMaxIndexes(const int* array, int size) {
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }

        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    return minIndex + maxIndex;
}

int ProductOfElementsWithOddIndexes(const int* array, int size) {
    int product = 1;

    for (int i = 1; i < size; i += 2) {
        product *= array[i];
    }

    return product;
}

void SwapTwoElements(int* array, int size, int firstIndex, int secondIndex) {
    if (firstIndex >= 0 && firstIndex < size && secondIndex >=0 && secondIndex < size) {
        std::swap(array[firstIndex], array[secondIndex]);
    }
}