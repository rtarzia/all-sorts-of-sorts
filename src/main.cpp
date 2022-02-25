#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "sorts.h" 

#define LIST_SIZE 20 

int main() {
    srand(time(NULL));

    // typedef void (*sort_function)(std::vector<int>*);
    // sort_function funcs[] = {&selection_sort, &bubble_sort};

    std::vector<int> unsortedList;
    for (int i = 0; i < LIST_SIZE; ++i)
        unsortedList.push_back(rand() % LIST_SIZE); 

    std::vector<int> sorted_list(unsortedList);
    print_list(&sorted_list);
    insertion_sort(&sorted_list);
    print_list(&sorted_list);

}