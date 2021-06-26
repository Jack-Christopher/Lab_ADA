#include <iostream>

def fibonacci(n):
    a = 1
    b = 1

    for k in range(2, n+1):
        temp = b
        b = a+b
        a = temp
    return a


n =int( input("Ingrese n:"))
#for k in range(1, n+1):
#    print("N :", k , ": ", fibonacci(k), "\n")
print(fibonacci(n))
input()
