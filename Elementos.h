#ifndef ELEMENTOS_H
#define ELEMENTOS_H
#include"fil"
#include<string.h>

typedef struct reg_medico{
	int idade;
	char nome[50];
	//lista de pacientes pra serem atendidos
}Medico;

Medico registra_medico(int i, char* nome){
	Medico c;
	c.idade = i;
	strcpy(c.nome,"Dr.");
	strcat(c.nome, nome);
	return c;
}

void printa_medico(Medico doc){
	printf("Idade: %d \n", doc.idade);
	printf("Eu sou o %s", doc.nome);
}


typedef struct reg_paciente{
	int prioridade;
	char nome[50];
	char cpf[20];
	int idade;
} Paciente;

Paciente registra_paciente(int i, char* n, char* cpf, int pri){
	Paciente novo;
	strcpy(novo.nome, n);
	strcpy(novo.cpf,cpf);
	novo.idade = i;
	if(pri > 3){
		novo.prioridade = 3;
	}else if(pri < 1){
		novo.prioridade = 1;
	}else{
		novo.prioridade = pri;
	}
	return novo;
}

void printa_paciente(Paciente p){
	printf("Ficha do Paciente \n");
	printf("Nome: %s\n", p.nome);
	printf("Idade: %d", p.idade);
	printf("CPF: %s \n", p.cpf);
	printf("Status de Prioridade: %d", p.prioridade);
}





#endif
