#include <fstream>
#include <vector>
#include <string>
#include <iostream>

std::vector<int> histo(std::string stringOpen)
{
	std::ifstream inputFile(stringOpen);
	std::vector<int> v{0};
		
			std::string word;
			for (;inputFile >> word;)
			{
					int wordSize = word.length();

						if(wordSize >= v.size())
						{
							v.resize(wordSize + 1, 0);
						}

					v[wordSize] += 1;
			}

		inputFile.close();
		
		return  v;
}


    int main() {
    std::vector<int> vector = histo(std::string("input.txt"));
    for (int element: vector) {
        std::cout << element << " "; }
    std::cout << std::endl; }