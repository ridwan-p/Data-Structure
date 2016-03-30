#include <iostream>
#include <ctime>

template<typename T>  
T partition(T data[], int lo, int hi);

template<typename T>
void quick_sort(T data[], int lo, int hi);

int main()
{
	const int SIZE = 10;
	int data[SIZE];
	
	srand(std::time(0));
	
	std::cout << "Before Sorting, Data : ";
	for(int i = 0; i < SIZE; i++)
	{
		
		data[i] = std::rand() % 100;
		
		std::cout << data[i] << " ";		
	}
	
	std::cout << std::endl;
	
	quick_sort(data, 0, SIZE -1);	
	//partition(data,0 , SIZE -1);
	std::cout << "After Sorting, Data : ";
	for(auto i : data)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}

template<typename T>
T partition(T data[], int lo, int hi)
{
	T pivot = data[hi];
	//std::cout << pivot << std::endl;
	int i = lo;
	
	for(int j = lo; j < hi; j++)
	{
		if(data[j] <= pivot)
		{
			std::swap(data[i], data[j]);
			i++;
		}
	}
	std::swap(data[i], data[hi]);
	return i;
}

template<typename T>
void quick_sort(T data[], int lo, int hi)
{
	if(lo < hi)
	{
		int p = partition(data, lo, hi);
		quick_sort(data, lo, p - 1);
		quick_sort(data, p + 1, hi);
	}
}
