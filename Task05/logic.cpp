// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию, которая реверсирует элементы вектора.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.

#include "logic.h"

void reverse(int* array, int size) {
	int start = 0;
	int finish = size - 1;
	if (size <= 0) {
		return;
	}

	while (start <= finish) {
		swap(array[start], array[finish]);
		start++;
		finish--;
	}

}