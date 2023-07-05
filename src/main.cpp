#include <iostream>
#include <memory>
#include "VectorUtils.h"
#include "STDArrayUtils.h"
#include "CArray.h"

int main() {
    int choice;
    std::cout << "Choose a version for work: " << std::endl;
    std::cout << "1. std::vector" << std::endl;
    std::cout << "2. std::array" << std::endl;
    std::cout << "3. C-array" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            int vectorSize;
            std::cout << "Enter the size of the vector: " << std::endl;
            std::cin >> vectorSize;

            std::unique_ptr<std::vector<int>> vector = std::make_unique<std::vector<int>>(vectorSize);

            std::cout << "Enter the elements of an vector: " << std::endl;
            for (int i = 0; i < vectorSize; ++i) {
                std::cin >> (*vector)[i];
            }

            int smallestEvenOrOdd = FindSmallestEvenOrOdd(*vector);
            std::cout << "Least Even or Least Odd Element: " << smallestEvenOrOdd << std::endl;

            int sumOfIndexes = SumOfMinAndMaxIndexes(*vector);
            std::cout << "The sum of the indexes of the minimum and maximum elements: " << sumOfIndexes << std::endl;

            int productOfIndexes = ProductOfElementsWithOddIndexes(*vector);
            std::cout << "Product of elements with odd indexes: " << productOfIndexes << std::endl;

            int firstIndex;
            int secondIndex;

            std::cout << "Enter item indexes to exchange: " << std::endl;
            std::cin >> firstIndex >> secondIndex;
            SwapTwoElements(*vector, firstIndex, secondIndex);

            std::cout << "Vector after swapping elements" << std::endl;
            for (int element: *vector) {
                std::cout << element << " ";
            }
            break;
        }
        case 2: {
            std::array<int, arraySize> array{};
            std::cout << "Enter the elements of an array: " << std::endl;
            for (int i = 0; i < arraySize; ++i) {
                std::cin >> array[i];
            }

            int smallestEvenOrOddArray = FindSmallestEvenOrOdd(array);
            std::cout << "Least Even or Least Odd Element: " << smallestEvenOrOddArray << std::endl;

            int sumOfIndexesArray = SumOfMinAndMaxIndexes(array);
            std::cout << "The sum of the indexes of the minimum and maximum elements: " << sumOfIndexesArray
                      << std::endl;

            int productOfIndexesArray = ProductOfElementsWithOddIndexes(array);
            std::cout << "Product of elements with odd indexes: " << productOfIndexesArray << std::endl;

            int firstIndexArray;
            int secondIndexArray;

            std::cout << "Enter item indexes to exchange: " << std::endl;
            std::cin >> firstIndexArray >> secondIndexArray;
            SwapTwoElements(array, firstIndexArray, secondIndexArray);

            std::cout << "Array after swapping elements" << std::endl;
            for (int element: array) {
                std::cout << element << " ";
            }
            break;
        }
        case 3: {
            int cStyleArraySize;
            std::cout << "Enter the size of the C array:" << std::endl;
            std::cin >> cStyleArraySize;

            int* cStyleArray = new int[cStyleArraySize];
            std::cout << "Enter the elements of an array: " << std::endl;
            for (int i = 0; i < arraySize; ++i) {
                std::cin >> cStyleArray[i];
            }

            int smallestEvenOrOddArray = FindSmallestEvenOrOdd(cStyleArray, cStyleArraySize);
            std::cout << "Least Even or Least Odd Element: " << smallestEvenOrOddArray << std::endl;

            int sumOfIndexesArray = SumOfMinAndMaxIndexes(cStyleArray, cStyleArraySize);
            std::cout << "The sum of the indexes of the minimum and maximum elements: " << sumOfIndexesArray
                      << std::endl;

            int productOfIndexesArray = ProductOfElementsWithOddIndexes(cStyleArray, cStyleArraySize);
            std::cout << "Product of elements with odd indexes: " << productOfIndexesArray << std::endl;

            int firstIndexArray;
            int secondIndexArray;

            std::cout << "Enter item indexes to exchange: " << std::endl;
            std::cin >> firstIndexArray >> secondIndexArray;
            SwapTwoElements(cStyleArray, cStyleArraySize, firstIndexArray, secondIndexArray);

            std::cout << "Array after swapping elements" << std::endl;
            for (int i = 0; i < cStyleArraySize; ++i) {
                std::cout << cStyleArray[i] << " ";
            }
            break;
        }
        default:
            std::cout << "Unknown instruction." << std::endl;
    }
}
