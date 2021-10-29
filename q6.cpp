/*
    6 - Declare um vetor de 10 inteiros, leia um valor 
    para cada posição e no final mostre o calculo do 
    fatorial do maior e do menor.
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int inteiros[10];
    int maior, menor, fatMaior = 1, fatMenor = 1;
    
    for(int i = 0; i < 10; i++)
    {
        cout << "Posicao " << i << " do vetor: ";
        cin >> inteiros[i];
    }

    cout << endl;

    menor = inteiros[0];
    maior = inteiros[0];

    //valores para menor e maior
    for (int i = 1; i <= 9; i++)
    {
        if(inteiros[i] < menor)
            menor = inteiros[i];
        
        if(inteiros[i] > maior)
            maior = inteiros[i];
    }

    //fatorial maior
    for(int i = 1; i <= maior; i++)
    {
        fatMaior *= i;
    }

    //fatorial menor
    for(int i = 1; i <= menor; i++)
    {
        fatMenor *= i;
    }

    cout << "Fatorial do maior: " << fatMaior << endl;
    cout << "Fatorial do menor: " << fatMenor << endl;

    return 0;
}