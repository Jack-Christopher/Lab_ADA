#include <iostream>

double fibonacci(int n)
{
    double a = 1;
    double b = 1;
    double temp;

    for (int k = 2; k <= n; k++)
    {
        temp = b;
        b = a + b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    std::cout << "N: ";
    std::cin >> n;
    for (int k = 1; k < n; k++)
        std::cout << "N :" << k << ": " << fibonacci(k) << "\n";
    return 0;
}