#include <iostream>

void swap(int& a, int &b);
void select_sort(int data[], int size);

int main()
{
	const int SIZE = 8;
	int data[SIZE] = {1,3,1,1,7,3,3,2};
	
	std::cout << "data acak : " ;
	for(int i = 0; i < SIZE; i++)
		std::cout<< i << " ";
	std::cout << std::endl;

	select_sort(data, SIZE);
	
	std::cout << "data urut : " ;
	for(int i = 0; i < SIZE; i++)
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

void select_sort(int data[], const int size)
{
	int min;
	
	for(int i = 0; i < size; i++)
	{
		min = i;
		
		for(int j = i + 1; j < size; j++)
		{
			if(data[j] < data[min])
			{
				min = j;
			}
		}
		
		swap(data[i], data[min]);
	}
}
