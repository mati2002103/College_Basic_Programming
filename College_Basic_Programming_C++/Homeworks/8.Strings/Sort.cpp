#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::vector<std::string> words;
	std::string word;
	while (std::cin >> word) {
		words.push_back(word);
	}
	for (int i = 0; i < words.size(); ++i)
	{
		for (int j = 0; j < words.size(); ++j)
		{
			if (words[i] < words[j]) {
				std::swap(words[i], words[j]);
			}
		}
	}
	for (int i = 0; i < words.size(); ++i) 
	{
		std::cout << words[i] << " ";
	}

}
