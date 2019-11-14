#ifndef OBJETOS_H
#define OBJETOS_H

#include<string.h>
#define Prioridade int
#define Verde 3
#define Amarelo 2
#define Vermelho 1


//Estrutura do Paciente
struct paciente{
	int idade;
	char Nome[30];
	Prioridade prioridade;
	char Sexo;
	char CPF[10];
	char Anamnese[40]; 	
};
typedef struct paciente Paciente;


Paciente Registro(int idade, char* nome,int prioridade, char sexo, char* CPF, char* anam)
{
	Paciente f;
	f.idade = idade;
	strcpy(f.Nome,nome);
	
}







#endif

