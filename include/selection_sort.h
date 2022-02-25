#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <vector>

template <typename T>
void selection_sort(std::vector<T>* arr) {
    typename std::vector<T>::size_type i, j, minIndex;
    T min;

    for (i = 0; i < arr->size(); ++i) {
        min       = arr->at(i);
        minIndex  = i;
        
        for (j = i; j < arr->size(); ++j) {
            if (arr->at(j) < min) {
                min       = arr->at(j);
                minIndex  = j;
            }
        }

        if (minIndex > i) {
            T tmp = arr->at(i);
            arr->at(i) = arr->at(minIndex);
            arr->at(minIndex) = tmp;
        }
    }
}

#endif