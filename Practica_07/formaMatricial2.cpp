#include <iostream>
#include <vector>
#include "matriz.h"

// Esta version usa la Forma Matricial y ademas Aritemtica Modular

Matriz fibDV(int n, Matriz m, int mod, std::vector<Matriz> &tempRespuestas, int i)
{
    if (n == 1)
        return m;

    int mitad = n/2;
    Matriz resultado; // inicializado con valor por defecto
    if (tempRespuestas[i-1].getMatriz() != resultado.getMatriz()) // existe valor en lista
    {
        resultado = tempRespuestas[i-1];
    }
    else
    {
        Matriz temp1 = fibDV(mitad, m, mod, tempRespuestas, i-1);   //recursividad
        resultado = temp1 * temp1;
    }
    
    if (resultado.getMatriz()[1][1] > mod)
    {

        resultado.aplicarModulo(mod);
    }
    tempRespuestas[i-1] = resultado;
    return resultado;
}

int main()
{
    Matriz m;
    int n = 1073741824;     // 2^30
    int mod = 1048576;      // 2^20
    std::vector<Matriz> tempRespuestas;
    for (int k = 0; k < 30; k++)
        tempRespuestas.push_back(m);
    std::cout<< fibDV(n, m, mod, tempRespuestas, 30).getMatriz()[0][1];
    return 0;
}