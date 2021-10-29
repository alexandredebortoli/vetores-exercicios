/*
    2 - Calcule a média das notas de 10 alunos de uma disciplina e 
    determine o número de alunos que tiveram nota superior a média calculada.
*/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int alunos[10];
    int soma = 0, media, numAlunosAcimaMedia = 0;

    for (int i = 0; i <= 9; i++)
    {
        cout << "Nota aluno " << i + 1 << ": ";
        cin >> alunos[i];
        soma += alunos[i];
    }

    media = soma / 10;

    for (int i = 0; i <= 9; i++)
    {
        if(alunos[i] > media)
            numAlunosAcimaMedia++;
    }

    cout << "media: " << media << endl;
    cout << "Numero de alunos acima da media: " << numAlunosAcimaMedia << endl;
    
    return 0;
}