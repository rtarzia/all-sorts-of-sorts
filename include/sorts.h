#include <vector>

void bubble_sort(std::vector<int>* arr);
void selection_sort(std::vector<int>* arr);

void printList(std::vector<int>* arr) {
    for (std::vector<int>::size_type i = 0; i < arr->size(); ++i) {
        std::cout << arr->at(i) << std::endl;
    }
}