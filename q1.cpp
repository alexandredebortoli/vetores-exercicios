/* 1 - Declare um vetor de 10 inteiros, 
    leia um valor para cada posição e no final mostre a média, 
    o menor e o maior valor contidos no vetor
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int inteiros[10];
    int soma = 0, media, menor, maior;

    for (int i = 0; i <= 9; i++)
    {
        cout << "Posicao " << i << " do vector: ";
        cin >> inteiros[i];
        soma += inteiros[i];
    }

    menor = inteiros[0];
    maior = inteiros[0];

    for (int i = 1; i <= 9; i++)
    {
        if(inteiros[i] < menor)
            menor = inteiros[i];
        
        if(inteiros[i] > maior)
            maior = inteiros[i];
    }

    media = soma / 10;

    cout << "media: " << media << endl;
    cout << "menor valor: " << menor << endl;
    cout << "maior valor: " << maior << endl;

    return 0;
}