class Cuadrados
{
private:
    int matriz[14][14];
    int getAnswerHelper(int i);
    void propagate(int index);
    int calculateAnswer(int i, int n);
public:
    Cuadrados();
    int getAnswer(int i, int j);
    ~Cuadrados();
};


Cuadrados::Cuadrados()
{
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            matriz[i][j] = 0;
        }
    }
    matriz[13][13] = 1;
}

void Cuadrados::propagate(int index)
{
    for (int i = index+1; i < 14; i++)
        matriz[i][index] = matriz[index][index];

    for (int j = index+1; j < 14; j++)
        matriz[index][j] = matriz[index][index];
}


int Cuadrados::calculateAnswer(int i, int n)
{
    if (matriz[i+1][i+1] == 0)
        matriz[i+1][i+1] = getAnswerHelper(i+1);

    return matriz[i+1][i+1] + (n*n);
}


int Cuadrados::getAnswerHelper(int i)
{
    int answer = calculateAnswer(i, 13-i+1);
    matriz[i][i] = answer;
    propagate(i);
    return matriz[i][i];
}


int Cuadrados::getAnswer(int i, int j)
{
    if (matriz[i][j] != 0)
        return matriz[i][j];

    int indice = (i < j)? ( i) : (j);    
    return getAnswerHelper(indice);
}



Cuadrados::~Cuadrados()
{

}
