/*
    3 - Declare um vetor de 5 inteiros, leia um valor para cada posição e no final 
    mostre quantos elementos possuem valor maior, menor e igual ao primeiro 
    elemento do vetor.
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int inteiros[5];
    int maior=0, menor=0, igual=0;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Posicao " << i << " do vector: ";
        cin >> inteiros[i];
    }

    for (int i = 1; i <= 4; i++)
    {
        if(inteiros[i] < inteiros[0])
            menor++;
        else if(inteiros[i] > inteiros[0])
            maior++;
        else if(inteiros[i] == inteiros[0])
            igual++;
    }

    cout << "numero de elementos igual que o primeiro: " << igual << endl;
    cout << "numero de elementos menor que o primeiro: " << menor << endl;
    cout << "numero de elementos maior que o primeiro: " << maior << endl;

    return 0;
}
