#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
int main()
{
    std::srand(std::time(nullptr));
    std::vector<std::string> maze;
    std::ifstream file("snake.txt");
    for (std::string line; std::getline(file, line);)
    {
         maze.push_back(line);
    }
    file.close();
    std::vector<std::vector<int>> snake{{1, 1}, {1, 2}, {1, 3}};
    std::vector<int> heading{+1, 0};
    std::vector<int> treat{1 + std::rand() % 18, 1 + std::rand() % 28};
    while (true)
    {
        if (snake[0] == treat)
        {
            snake.push_back(std::vector<int>(2));
            treat = std::vector<int>{1 + std::rand() % 18, 1 + std::rand() % 28};
        }
        std::vector<std::string> board = maze;
        for (int index = 0; index < snake.size(); ++index)
        {
            board[snake[index][0]][snake[index][1]] = '@';
        }
        board[treat[0]][treat[1]] = '#';
        for (std::string line : board)
        {
            std::cout << line << std::endl;
        }
        if (kbhit())
        {
            char key = getch();
            switch (key)
            {
            case 'a':
            {
                heading = {+1, 0};
                break;
            }
            case 'q':
            {
                heading = {-1, 0};
                break;
            }
            case 'p':
            {
                heading = {0, +1};
                break;
            }
            case 'o':
            {
                heading = {0, -1};
                break;
            }
            }
        }
        for (int index = snake.size(); index > 1;)
        {
            --index;
            snake[index] = snake[index - 1];
        }
        snake[0][0] += heading[0];
        snake[0][1] += heading[1];
        if (board[snake[0][0]][snake[0][1]] == '@')
        {
            break;
        }
        for (int counter = 0; counter < 50000000; ++counter)
            ;
        std::system("cls");
    }
}
