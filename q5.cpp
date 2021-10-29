/*
    5 - Leia dois vetores A e B com vinte elementos. 
    Construa um terceiro vetor C, onde cada elemento 
    é a subtração do elemento correspondente de a A com B.
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int A[20];
    int B[20];
    int C[20];
    
    for(int i = 0; i < 20; i++)
    {
        cout << "Posicao " << i << " do vetor A: ";
        cin >> A[i];
    }

    cout << endl;

    for(int i = 0; i < 20; i++)
    {
        cout << "Posicao " << i << " do vetor B: ";
        cin >> B[i];
    }

    cout << endl;
    
    for(int i = 0; i < 20; i++)
    {
        C[i] = A[i] - B[i];
        cout << C[i] << endl;
    }

    return 0;
}