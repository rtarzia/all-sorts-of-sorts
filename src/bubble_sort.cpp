#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>* arr) {
	
	while (true) {
		bool sorted = true;

		for (std::vector<int>::size_type i = 0; i < arr->size() - 1; ++i) {
			if (arr->at(i) > arr->at(i+1)) {
				sorted = false;
				int tmp = arr->at(i);
				arr->at(i) = arr->at(i+1);
				arr->at(i+1) = tmp;
			}
		}

		if (sorted) break;
	}
	
}