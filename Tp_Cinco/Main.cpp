//Functions practice
#include <iostream>
typedef float(*fncPtr)(char var);

//(8) Array sort function.
void sort(int* arrayPtr, unsigned int size) {
	for (unsigned int i = 0; i < size; --size) {
		for (unsigned int j = 0; j < size-1; ++j) {
			if (arrayPtr[j] >= arrayPtr[j + 1]) {
				int aux = arrayPtr[j + 1];
				arrayPtr[j + 1] = arrayPtr[j];
				arrayPtr[j] = aux;
			}
		}
	}
}

//(8) Array set function
void set(int* arrayPtr, unsigned int size) {

	for (unsigned int i = 0; i < size; ++i)
	{
		std::cout << "Ingrese valor para colocar en la posicion " << i << ":\n";
		std::cin >> arrayPtr[i];
	}
}

//(8) Array print function
void print(int* arrayPtr, unsigned int size) {

	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << arrayPtr[i] << " ";
	}
	std::cout << std::endl;
}

//(9) Constant value can be operated with, but not change itself
//int constChange(const int var) {
//	var = var * 5;
//	return var;
//}

//(10) Function declaration and definition
int doubleToInt(double value) {
	int aux = (int)value;
	return aux;
}

//(11) Char to Float function
float charToFloat(char var) {
	return var;
}

//(11) Int to Function Pointer
fncPtr intToFunctPtr(int parameter) {
	fncPtr CTF = charToFloat;
	return CTF;
}

int main() {
	//(8)
	const unsigned int arrSize = 10;
	int arr[arrSize];

	set(arr, arrSize);

	print(arr, arrSize);

	sort(arr, arrSize);

	print(arr, arrSize);

	//(10)
	int(*functPtr)(double) = doubleToInt;
	std::cout << functPtr(47.78f) << std::endl;

	//(11)
	int example = 65;
	fncPtr CTF = intToFunctPtr(example);
	std::cout << CTF((char)example) << std::endl;

	int end = 0;
	std::cin >> end;
	return 0;
}