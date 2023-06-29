#include <fstream>
#include <iostream>
#include <sstream>
#include <string>



int main(int argc, char* argv[]) {
    
    

    int n = std::stoi(argv[1]);
    std::string filename(argv[2]);

    column(n, filename);


   

}
void column(int n, const std::string& filename) {
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;
        int count = 0;

        while (iss >> word) {
            count++;

            if (count == n) {
                std::cout << word << std::endl;
                break;
            }
        }

        if (count < n) {
            std::cout << std::endl;
        }
    }

    file.close();
}
