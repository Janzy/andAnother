#include <iostream>
using namespace std;

template <typename T>

void swap(T *a, T *b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>

void sort(T *array, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray - 1; i++)
	{
		for (int j = 1; j < sizeOfArray; j++)
		{
			if (array[i] < array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}

template < typename T >

void display(T *array, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
{
		cout << array[i] << ", ";
	}
}

int main()
{
	const int sizeOfArray = 3;
	int array[] = { 5, 1, 3 };
	sort<int>(array, 3);
	display<int>(array, 3);

	system("pause");
	return 0;


}