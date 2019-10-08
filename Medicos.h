#ifndef MEDICOS_H
#define MEDICOS_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct reg_medico{
	int idade;
	char nome[50];
}Medico;

Medico registra_medico(int i, char* nome){
	Medico c;
	c.idade = i;
	strcpy(c.nome,"Dr.");
	strcat(c.nome, nome);
	return c;
}

void printa_medico(Medico doc){
	printf("%s, \n", doc.nome);
	printf("Idade: %d \n", doc.idade);
}




#endif
