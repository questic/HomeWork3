#pragma once

#include <array>

const int arraySize = 5;

int FindSmallestEvenOrOdd(const std::array<int, arraySize>& array);
int SumOfMinAndMaxIndexes(const std::array<int, arraySize>& array);
int ProductOfElementsWithOddIndexes(const std::array<int, arraySize>& array);
void SwapTwoElements(std::array<int, arraySize>& array, int firstIndex, int secondIndex);