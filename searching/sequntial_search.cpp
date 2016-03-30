#include <iostream>
#include <vector>

bool sequntial_search(const std::vector<int> data, const int& x);

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
	
	std::cout << ((sequntial_search(data,x)) ? "data is founded" : "data is't founded ") << std::endl;
	
	return 0;
}

bool sequntial_search(const std::vector<int> data, const int& x)
{
	for(auto i = 0; i < data.size(); ++i)
	{
		if(data[i] == x)
			return true;
	}
	return false;
}
