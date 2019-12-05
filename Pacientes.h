#ifndef PACIENTES_H
#define PACIENTES_H
#include<string.h>
#include<stdio.h>

#define Prioridade int
#define Verde 3
#define Amarelo 2
#define Vermelho 1


//Estrutura do Paciente
struct paciente{
	int numero;
	int codigo;
	int idade;
	char Nome[300];
	Prioridade prioridade;
	char Sexo[300];
	char CPF[100];
	char Anamnese[400]; 	
};
typedef struct paciente Paciente;


//Printando o paciente
void printa_paciente(Paciente p)
{
	printf("\n");
	printf("Prioridade: %d \n", p.prioridade);
	printf("Nome: %s\n", p.Nome);
	printf("Idade: %d \n", p.idade);
	printf("Sexo: %s \n",p.Sexo);
	printf("Anamnese e Queixa Principal: %s\n", p.Anamnese);
}





#endif

