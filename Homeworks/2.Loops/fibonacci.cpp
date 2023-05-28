#include <iostream>

int main()
{

        int n,a,b,c;
        std::cin >> n;
        a = 1;
        b = 0;
        
        for (int i = 1; i <= n; i++) 
        {
                std::cout << a + b<<std::endl;
                c = a;
                a = a + b;
                b = c;
        
        }
}
