#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>

template <typename T>
void bubble_sort(std::vector<T>* arr) {
	
	while (true) {
		bool sorted = true;

		for (typename std::vector<T>::size_type i = 0; i < arr->size() - 1; ++i) {
			if (arr->at(i) > arr->at(i+1)) {
				sorted = false;
				T tmp = arr->at(i);
				arr->at(i) = arr->at(i+1);
				arr->at(i+1) = tmp;
			}
		}

		if (sorted) break;
	}
	
}

#endif
