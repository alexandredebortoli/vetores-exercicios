/*
    4 - Declare um vetor de 10 inteiros, leia um valor para cada 
    posição e no final mostre os elementos deste vetor em posição 
    inversa ao que foram atribuídos.
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int inteiros[10];
    
    for(int i = 0; i < 10; i++)
    {
        cout << "Posicao " << i << " do vetor: ";
        cin >> inteiros[i];
    }
    
    for (int i = 9; i >= 0; i--)
    {
        cout << inteiros[i] << endl;
    }

    return 0;
}