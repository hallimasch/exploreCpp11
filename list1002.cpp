#include <algorithm>
#include <iostream>
#include <vector>

typedef std::vector<int>::iterator it;

int main()
{
	std::vector<int> data{};
	int x{};

	while(std::cin >> x)
		data.push_back(x);

	std::sort(data.begin(), data.end());
	std::cout << "sorted:" << std::endl;

	for(it i{data.begin()}, end{data.end()}; i != end; ++i)
		std::cout << *i << std::endl;

	return 0;
}
