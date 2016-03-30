#include <iostream>
#include <vector>

std::vector<int> sequntial_search(std::vector<int> data, int x);

int main()
{
	std::vector<int> data{2,23,1,43,54,6,34,5,43,2,32,54,7,6,32,4,12,43,12};
	int x;
	
	std::cout << "data : ";
	for(const auto& i : data)
		std::cout << i << ' ';
	std::cout << std::endl;
	
	std::cout << "search : " ;
	std::cin >> x;
	
	std::vector<int> a = sequntial_search(data,x);
	if(!a.empty())
	{
		std::cout << "data is founded in indexs : ";
		for(const auto& i : a)
            std::cout << i << ' ';
        std::cout << std::endl;
	  
	}
	else
		std::cout << "data is't' founded" << std::endl;
	
	return 0;	
}

std::vector<int> sequntial_search(std::vector<int> data, int x)
{
	std::vector<int> indexData;
	for(auto i = 0; i < data.size(); ++i)
	{
		if(data[i] == x)
			indexData.push_back(i);
	}
	return indexData;
}
