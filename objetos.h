#ifndef OBJETOS_H
#define OBJETOS_H

#include<string.h>
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


//Registrando Paciente;
Paciente Registro(int codigo,int idade, char* nome,int prioridade, char sexo, char* CPF, char* anam)
{
	Paciente f;
	f.codigo = codigo;	
	f.idade = idade;
	strcpy(f.Nome,nome);
	f.prioridade = prioridade;
	f.Sexo = sexo;
	strcpy(f.CPF,CPF);
	strcpy(f.Anamnese,anam);
	return f;
}

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

