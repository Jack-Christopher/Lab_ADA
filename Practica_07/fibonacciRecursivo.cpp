#include <iostream>

long long int fibonacci(int n)
{
    if (n <= 1)
        return 1;
   
    return  fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    std::cout<< "N: ";
    std::cin>> n;
    for (int k = 1; k < n; k++)
        std::cout<< "N :"<<k << ": "<< fibonacci(k)<<"\n";
    return  0;
}
