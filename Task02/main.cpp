#include "logic.h"

int main() {
	int size;
	double array[DEFAULT_SIZE];

	do {
		system("cls");
		cout << "Input size of your array: ";
		cin >> size;

	} while (size <= 0 or size > DEFAULT_SIZE);
	
	cout << "input your elements: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];

	}
	cout << "Result sum = " + to_string(get_sum(array, size, get_average(array, size)));
	return 0;
}