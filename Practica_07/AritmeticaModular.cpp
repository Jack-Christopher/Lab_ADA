#include <iostream>

// Esta version usa la Aritmetica Modular solamente
int fibonacci(int n, int mod)
{
    int a = 1;
    int  b = 1;
    int temp;

    for (int k = 2; k <= n; k++)
    {
        temp = b;
        b = a+b;
        a = temp;
        if (a >= mod && b >= mod)
        {
            a %= mod;
            b %= mod;
        }
    }
    return a;
}

int main()
{
    int n = 1073741824; // 2^30
    int mod = 1048576;  //2^20
    std::cout<< "Resultado: "<<fibonacci(n, mod);

    return  0;
}
