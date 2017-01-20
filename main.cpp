#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void bubbleSort(std::vector<T>& aList) {
    bool swap = true;
    while(swap) {
        swap = false;
        for(int i = 0; i < aList.size() - 1; i++) {
            if(aList.at(i) < aList.at(i)) {
                std::swap(aList[i], aList[i+1]);
                swap = true;
            }
        }
    }
}

template<typename T>
void selectionSort(std::vector<T>& aList) {
    // find smallest element and move to 0 pos, scan from 1 pos
    // find next smallest and move to 1 pos, scan from 2 pos
    // etc, scan from 3 pos
    int minPos = 0;

    for(int pos = 0; pos < aList.size() - 1; pos++) {
        minPos = pos;
        for(int curPos = pos + 1; curPos < aList.size(); curPos++) {
            // if (start) > (start + 1n)
            if(aList.at(minPos) > aList.at(curPos)) {
                std::swap(aList[minPos], aList[pos]);
            }
        }
    }
}

template<typename T>
void print(std::vector<T> aList) {
    for(int i = 0; i < aList.size(); i++) {
        std::cout << "pos: " << i << ", value: " << aList.at(i) << std::endl;
    }
}

int main() {
    std::vector<int> x;
    x = { 2, 3, 6, 0, 9, 1, 4};
    bubbleSort(x);
    print(x);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}