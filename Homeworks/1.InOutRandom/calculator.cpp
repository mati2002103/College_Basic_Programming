 #include <iostream>
 int main()
 {
 int i;
    std::cin >> i;
    double a, b;
    std::cin >> a >> b;

    switch (i) {
    case 1: std::cout << a + b; break;
    case 2: std::cout << a - b; break;
    case 3: std::cout << a * b; break;
    case 4: std::cout << a / b; break;
    case 5: std::cout << sqrt(a); break;

    default:break;
    }
 }