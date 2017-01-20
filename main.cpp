#include <iostream>
#include <vector>
#include <cmath>

#include "SortMe.h"

template <typename T>
void bubbleSort(std::vector<T> &aList);

template <typename T>
void selectionSort(std::vector<T> &aList);

template<typename T>
void print(std::vector<T> aList);

void makeVector(std::vector<int>& x) {
    if(x.size() > 0) {
        x.clear();
    }
    x = { 7, 2, 8, 3, 6, 0, 9, 1, 4, 5};
}

int main() {
    std::vector<int> x;

    makeVector(x);
    bubbleSort(x);
    print(x);

    //make a new vector
    makeVector(x);
    selectionSort(x);
    print(x);

    return 0;
}