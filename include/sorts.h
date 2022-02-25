#ifndef SORTS_H
#define SORTS_H

#include <vector>
#include <iostream>
#include "selection_sort.h"
#include "bubble_sort.h"
#include "insertion_sort.h"

template <typename T>
void print_list(std::vector<T>* arr) {
    std::cout << std::endl;
    for (typename std::vector<T>::size_type i = 0; i < arr->size(); ++i) {
        std::cout << arr->at(i) << std::endl;
    }
    std::cout << std::endl;
}

#endif