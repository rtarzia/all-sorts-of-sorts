#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>
#include <iostream>

template <typename T>
void insertion_sort(std::vector<T>* arr) {
    int i, j;

    for (i = 1; i < arr->size(); ++i) {
        for (j = i - 1; j >= 0; --j) {
            if (arr->at(j+1) < arr->at(j)) {
                T tmp = arr->at(j+1);
                arr->at(j+1) = arr->at(j); 
                arr->at(j) = tmp;
            }
        }
    }

}

#endif
