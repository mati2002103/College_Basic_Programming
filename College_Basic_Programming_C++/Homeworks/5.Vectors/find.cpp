#include <iostream>
#include <vector>
#include <utility>

int find(const std::vector<int> &v, int number) {
	int i = 0;
	for (;i < v.size() - 1; ++i)
	{
		if (v[i] == number) {
			return i;
		}
	};
	
	
	return v.size();
}



int main()
{

	int result = find(std::vector<int> {6, -1, 3,1,2,4,-5}, -5);
	std::cout << result << std::endl;
}