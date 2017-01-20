#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
#include <algorithm>

#include "SortMe.h"

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