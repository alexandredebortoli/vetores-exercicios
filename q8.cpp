/*
    8 - Leia 30 valores e jogue os pares em um vetor 
    e os ímpares em outro. Após a leitura calcule o 
    somatório dos dois vetores e exiba o de maior valor.
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int valores[10];
    int numPares = 0, numImpar = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> valores[i];

        if (valores[i] % 2 == 0)
            numPares++;
        else
            numImpar++;
    }

    int pares[numPares];
    int impares[numImpar];

    return 0;
}