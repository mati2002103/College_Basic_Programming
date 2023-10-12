#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
int main()
{
    std::vector<std::string> maze;
    std::ifstream file("maze.txt");
    for (std::string line; std::getline(file, line);)
    {
        maze.push_back(line);
    }
    file.close();
    int row = 1, column = 1;
    while (true)
    {
        std::vector<std::string> board = maze;
        board[row][column] = '&';
        for (std::string line : board)
        {
            std::cout << line << std::endl;
        }
        char key = getch();
        switch (key)
        {
        case 'a':
        {
            if (maze[row + 1][column] == ' ')
            {
                ++row;
            }
            break;
        }
        case 'q':
        {
            if (maze[row - 1][column] == ' ')
            {
                --row;
            }
            break;
        }

        case 'p':
        {
            if (maze[row][column + 1] == ' ')
            {
                ++column;
            }
            break;
        }
        case 'o':
        {
            if (maze[row][column - 1] == ' ')
            {
                --column;
            }
            break;
        }
        }
        std::system("cls");
    }
}