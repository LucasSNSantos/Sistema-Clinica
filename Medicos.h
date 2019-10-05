#ifndef MEDICOS_H
#define MEDICOS_H
#include<stdio.h>
#include<stdlib.h>

typedef struct reg_medico{
	int idade;
	char nome[50];
}Medico;

typedef struct node_med{
	Medico dado;
	struct node_med* prox;
	struct node_med* ante;
}Registro_Medico;

Registro_Medico* Registra_Medico(Medico med){
	Registro_Medico* novo;
	novo = (Registro_Medico*) malloc(sizeof(Registro_Medico));
	if(novo != NULL){
		novo->ante = NULL;
		novo->prox = NULL;
		novo->dado = med;
		return novo;
	}
	return NULL;
}

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




#endif
