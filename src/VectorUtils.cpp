#include <iostream>
#include "VectorUtils.h"

int FindSmallestEvenOrOdd(const std::vector<int>& vector) {
    int smallestEven = INT32_MAX;
    int smallestOdd = INT32_MAX;

    for (int element: vector) {
        if (element % 2 == 0 && element < smallestEven) {
            smallestEven = element;
        } else if (element % 2 != 0 && element < smallestOdd) {
            smallestOdd = element;
        }
    }

    return smallestEven != INT32_MAX ? smallestEven : smallestOdd;
}

int SumOfMinAndMaxIndexes(const std::vector<int>& vector) {
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < vector.size(); ++i) {
        if (vector[i] < vector[minIndex]) {
            minIndex = i;
        }

        if (vector[i] > vector[maxIndex]) {
            maxIndex = i;
        }
    }

    return minIndex + maxIndex;
}

int ProductOfElementsWithOddIndexes(const std::vector<int>& vector) {
    int product = 1;

    for (int i = 1; i < vector.size(); i += 2) {
        product *= vector[i];
    }

    return product;
}

void SwapTwoElements(std::vector<int>& vector, int firstIndex, int secondIndex) {
    if (firstIndex >= 0 && firstIndex < vector.size() && secondIndex >=0 && secondIndex < vector.size()) {
        std::swap(vector[firstIndex], vector[secondIndex]);
    }
}