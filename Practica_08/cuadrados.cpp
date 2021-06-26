#include <iostream>
#include <vector>
#include "cuadrados.h"

int main()
{
    Cuadrados C;
    std::cout<< "Ingresa los valores de los indices\n";
    int i, j;
    std::cout<< "i:\t";
    std::cin>> i;
    std::cout<< "j:\t";
    std::cin>> j;
    std::cout<< "La respuesta es:\t"<< C.getAnswer(i, j);
    return 0;
}
