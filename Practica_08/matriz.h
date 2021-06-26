
class Matriz
{
private:
    std::vector<std::vector<long long int>> matriz;
public:
    Matriz();
    void setElementos(long long int a, long long int b, long long int c, long long int d);
    std::vector<std::vector<long long int>> getMatriz();
    Matriz operator * (Matriz m);
    void aplicarModulo(int mod);
    std::string toString();
    ~Matriz();
};

Matriz::Matriz()
{
    std::vector<long long int> temp;
    temp.push_back(0);
    temp.push_back(1);
    matriz.push_back(temp);
    temp[0] = 1;
    matriz.push_back(temp);
}


void Matriz::setElementos(long long int a, long long int b, long long int c, long long int d)
{
    matriz[0][0] = a;
    matriz[0][1] = b;
    matriz[1][0] = c;
    matriz[1][1] = d;    
}

std::vector<std::vector<long long int>> Matriz::getMatriz()
{
    return matriz;
}

Matriz Matriz::operator * (Matriz m)
{
    std::vector<std::vector<long long int>> segundaMatriz = m.getMatriz();
    Matriz resultado;
    
    long long int a = matriz[0][0]*segundaMatriz[0][0]+matriz[0][1]*segundaMatriz[1][0];
    long long int b = matriz[0][0]*segundaMatriz[0][1]+matriz[0][1]*segundaMatriz[1][1];
    long long int c = matriz[1][0]*segundaMatriz[0][0]+matriz[1][1]*segundaMatriz[1][0];
    long long int d = matriz[1][0]*segundaMatriz[0][1]+matriz[1][1]*segundaMatriz[1][1];

    resultado.setElementos(a, b, c, d);
    return resultado;    
}

void Matriz::aplicarModulo(int mod)
{
    matriz[0][0] %= mod;
    matriz[0][1] %= mod;
    matriz[1][0] = matriz[0][1];
    matriz[1][1] %= mod;    
}

std::string Matriz::toString()
{
    std::string cadena;
    cadena += std::to_string( matriz[0][0]);
    cadena += "\t";
    cadena += std::to_string( matriz[0][1]);
    cadena += "\n";
    cadena += std::to_string( matriz[1][0]);
    cadena += "\t";
    cadena += std::to_string( matriz[1][1]);
    cadena += "\n";

    return cadena;
}

Matriz::~Matriz()
{
}
