#include <iostream>

void swap(int& a, int& b);
void insertion_sort(int data[], const int size);

int main()
{
	const int SIZE = 8;
	int data[SIZE] = {1,3,1,1,7,3,3,2};
	
	std::cout << "data acak : " ;
	for(int i = 0; i < SIZE; i++)
		std::cout<< i << " ";
	std::cout << std::endl;

	insertion_sort(data, SIZE);
	
	std::cout << "data urut : " ;
	for(int i = 0; i < SIZE; i++)
		std::cout<< i << " ";
	std::cout << std::endl;
	
	return 0;
}

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void insertion_sort(int data[], const int size)
{		
	for(int i = 0; i < size; i++)
	{
		int j = i;
		
		while((j > 0) && data[j -1] > data[j])
		{
			swap(data[j], data[j -1]);
			--j;
		}
	}
}
