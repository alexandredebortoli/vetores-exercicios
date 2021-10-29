/*
    7 - Construa um algoritmo que solicite 5 valores 
    inteiros ao usuário e os armazene em um vetor. 
    Após, deverá ser invertido os valores do vetor 
    utilizando um segundo vetor.
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int inteiros[5];
    int invertido[5];
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Posicao " << i << " do vetor inicial: ";
        cin >> inteiros[i];
    }

    cout << endl;

    int j = 4;
    for(int i = 0; i < 5; i++)
    {
        invertido[i] = inteiros[j];
        cout << "Posicao " << i << " do vetor invertido: " << invertido[i] << endl;
        j--;
    }

    return 0;
}