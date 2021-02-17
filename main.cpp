#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

//Com TAD
typedef struct
{
        char nome[255];
        int matricula;
        int anoIngresso;
        char curso[100];
} Aluno;

void ImprimeAluno(Aluno AlunoRecebido) // declara o parâmetro como uma struct
{
  printf("\n\n --------- Lendo os dados da TAD aluno - struct ---------\n\n");
  printf("Nome: %s", AlunoRecebido.nome);
  printf("Matricula: %d \n" , AlunoRecebido.matricula);
  printf("Ano de Ingresso: %d\n" , AlunoRecebido.anoIngresso);
  printf("Curso: %s", AlunoRecebido.curso);
}

int main()
{
    //Sem TAD
    char alunoNome[255];
    int  alunoMatricula;
    int  alunoAnoIngresso;
    char alunoCurso[100];

    Aluno AlunoTeste;

    printf("Nome do aluno: ");
    fflush(stdin);
    fgets(AlunoTeste.nome, 255, stdin);

    printf("Matricula: ");
    scanf("%d", &AlunoTeste.matricula);

    printf("Ano de Ingresso: ");
    scanf("%d", &AlunoTeste.anoIngresso);

    printf("Curso: ");
    fflush(stdin);
    fgets(AlunoTeste.curso, 100, stdin);

    ImprimeAluno(AlunoTeste);

    return 0;
}
