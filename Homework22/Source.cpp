#include <iostream>
using namespace std;

template <typename T>
void show_arr(T arr[], const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

// Задача 1
template <typename T>
void arr_swap(T arr[], const int lenght) {
	int *px, *py, tmp = 0;
	for (int i = 0; i < lenght - 1; i++)		
		if (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0 || arr[i + 1] % 2 != 0 && arr[i] % 2 == 0) {
			px = &arr[i];
			py = &arr[i + 1];
			tmp = *px;  
			*px = *py;
			*py = tmp;
		}
						
}

// Задача 2
template <typename T>
void func(T *num1,int num2) {	
	int tmp = *num1;
	for (int i = 1; i < num2; i++)					
		*num1 *= tmp;	
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10;

	// Задача 1
	const int size = 10;
	int arr[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Задача 1.\nИзначальный массив:\n";
	show_arr(arr, size);
	arr_swap(arr, size);
	cout << "Конечный массив:\n";
	show_arr(arr, size);
	cout << endl;
	
	// Задача 2	
	cout << "Задача 2.\n";
	func(&n, 3);
	cout << n << endl;


	
	
	return 0;
}