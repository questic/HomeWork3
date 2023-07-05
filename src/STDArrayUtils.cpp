#include <iostream>
#include "STDArrayUtils.h"

int FindSmallestEvenOrOdd(const std::array<int, arraySize>& array) {
    int smallestEven = INT32_MAX;
    int smallestOdd = INT32_MAX;

    for (int element: array) {
        if (element % 2 == 0 && element < smallestEven) {
            smallestEven = element;
        } else if (element % 2 != 0 && element < smallestOdd) {
            smallestOdd = element;
        }
    }

    return smallestEven != INT32_MAX ? smallestEven : smallestOdd;
}

int SumOfMinAndMaxIndexes(const std::array<int, arraySize>& array) {
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < array.size(); ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }

        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    return minIndex + maxIndex;
}

int ProductOfElementsWithOddIndexes(const std::array<int, arraySize>& array) {
    int product = 1;

    for (int i = 1; i < array.size(); i += 2) {
        product *= array[i];
    }

    return product;
}

void SwapTwoElements(std::array<int, arraySize>& array, int firstIndex, int secondIndex) {
    if (firstIndex >= 0 && firstIndex < array.size() && secondIndex >=0 && secondIndex < array.size()) {
        std::swap(array[firstIndex], array[secondIndex]);
    }
}