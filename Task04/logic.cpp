// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая меняет 
// экстремальные элементы вектора местами. Если экстремальных элементов
// несколько, то необходимо поменять последние найденные элементы.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.
#include "logic.h"
int find_max_element(int array[], int size) {
	if (size <= 0) {
		return -1;
	}
	int max = 0;

	for (int i = 1; i < size; i++) {
		if (array[i] >= array[max]) {
			max = i;
		}
	}

	return max;
}

int find_min_element(int array[], int size) {
	if (size <= 0) {
		return -1;
	}
	
	int min = 0;

	for (int i = 1; i < size; i++) {
		if (array[i] <= array[min]) {
			min = i;
		}
	}

	return min;
}

void swap_extrem_elements(int array[], int size, int max, int min) {
	if (size <= 0 or max < 0 or min < 0){
		return;
	}
	swap(array[max], array[min]);
}
