#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "sorts.h" 

#define LIST_SIZE 20 

int main() {
    srand(time(NULL));

    std::vector<int> unsortedList;
    for (int i = 0; i < LIST_SIZE; ++i)
        unsortedList.push_back(rand() % LIST_SIZE); 

    std::vector<int> bubbleList(unsortedList);
    printList(&bubbleList);
    bubble_sort(&bubbleList);
    printList(&bubbleList);

    std::vector<int> selectionList(unsortedList);
    selection_sort(&selectionList);
}