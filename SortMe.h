//
// Created by Matthew Kidd on 1/20/17.
//

#ifndef _SORTME_H_
#define _SORTME_H_
#include <iostream>
#include <vector>
template<typename T>
void bubbleSort(std::vector<T> &aList) {
    bool swap = true;
    while(swap) {
        swap = false;
        for(int i = 0; i < aList.size() - 1; i++) {
            if(aList.at(i) > aList.at(i + 1)) {
                std::swap(aList[i], aList[i + 1]);
                swap = true;
            }
        }
    }
}

template<typename T>
void selectionSort(std::vector<T> &aList) {
    // find smallest element and move to 0 pos, scan from 1 pos
    // find next smallest and move to 1 pos, scan from 2 pos
    // etc, scan from 3 pos
    int minPos = 0;

    for(int pos = 0; pos < aList.size() - 1; pos++) {
        minPos = pos;
        for(int curPos = pos + 1; curPos < aList.size(); curPos++) {
            // if (start) > (start + 1n)
            if(aList.at(minPos) > aList.at(curPos)) {
                std::swap(aList[minPos], aList[curPos]);
            }
        }
    }
}


template<typename T>
void print(std::vector<T> aList) {
    for(int i = 0; i < aList.size(); i++) {
        std::cout << "pos: " << i << ", value: " << aList.at(i) << std::endl;
    }
    std::cout << "end of line\n" << std::endl;
}
#endif //SORTING_SORTS_HPP
