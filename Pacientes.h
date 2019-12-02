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
	int codigo;
	int idade;
	char Nome[30];
	Prioridade prioridade;
	char Sexo;
	char CPF[10];
	char Anamnese[40]; 	
};
typedef struct paciente Paciente;


//Printando o paciente
void printa_paciente(Paciente p)
{
	printf("\n");
	printf("Nome: %s\n", p.Nome);
	printf("Idade: %d \n", p.idade);
	printf("Sexo: %c \n",p.Sexo);
	printf("Anamnese: %s\n", p.Anamnese);
}





#endif

