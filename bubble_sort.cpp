#include <iostream>

void swap(int& a, int &b);
void bubble_sort(int data[], const int size);

int main()
{
	const int SIZE = 8;
	int data[SIZE] = {1,3,1,1,7,3,3,2};
	
	std::cout << "data acak : " ;
	for(int i = 0; i < SIZE; i++)
		std::cout<< i << " ";
	std::cout << std::endl;

	bubble_sort(data, SIZE);
	
	std::cout << "data urut : " ;
	forg(int i = 0; i < SIZE; i++)
		std::cout<< i << " ";
	std::cout << std::endl;
	
	return 0;
}

void swap(int& a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int data[], const int size)
{
	for(int i = 0; i < size - 2; i++)
	{
		for(int j = 0; j < size - (i + 1); j++)
		{
			if(data[j] > data[j + 1])
			{
				swap(data[j], data[j+1]);
			}
		}
	}
}
