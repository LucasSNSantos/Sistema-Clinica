#ifndef ELEMENTOS_H
#define ELEMENTOS_H
#include<string.h>
#include<stdlib.h>
#include"Medicos.h"

typedef struct reg_paciente{
	int prioridade;
	char nome[50];
	char cpf[20];
	int idade;
	Medico escolhido;
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
	printf("Status de Prioridade: %d\n", p.prioridade);
}


//Area para os Nós

typedef struct node_pac{
	Paciente dado;
	struct node_pac* prox;
	struct node_pac* ante;
} Registro_Paciente;

Registro_Paciente* novo_registro(Paciente p){
	Registro_Paciente* novo;
	novo = (Registro_Paciente*) malloc(sizeof(Registro_Paciente));
	if(novo != NULL){
		novo->ante = NULL;
		novo->prox = NULL;
		novo->dado = p;
		return novo;
	}
	return NULL;
}


Paciente Associa_Medico(Paciente p, Medico m){
	Paciente novo = p;
	novo.escolhido = m;
	return novo;
}



#endif
