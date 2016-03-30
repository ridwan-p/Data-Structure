#include <iostream>
#include <ctime>

template<typename T>
T partition(T data[], int lo, int hi);

template<typename T>
void quick_sort(T data[], int lo, int hi);

int main()
{
	const int SIZE = 5;
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
	//partition(data,0 , SIZE - 1);
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
	
	int i = lo;
	int j = hi;
	while(i < j)
	{
		while(data[i] < pivot)
		{
			i++;
		}
		while(j > 0 && data[j] > pivot)
		{
			j--;
		}
		
		if(i >= j)
			break;
		else
			std::swap(data[i], data[j]);
	}
	
	std::swap(data[i], data[j]);
	return i;
}

template<typename T>
void quick_sort(T data[], int lo, int hi)
{
	if(lo < hi)
	{
		int p = partition(data, lo, hi);
		quick_sort(data, lo, p-1);
		quick_sort(data, p + 1, hi);
	}
}
