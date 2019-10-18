#ifndef MEDICOS_H
#define MEDICOS_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pilha-pacientes.h"
#include"URL.h"

typedef struct reg_medico{
	int idade;
	char nome[50];
	PILHA pacientes_atendidos;
}Medico;

Medico registra_medico(int i, char* nome){
	Medico c;
	c.idade = i;
	strcpy(c.nome,"Dr.");
	strcat(c.nome, nome);
	c.pacientes_atendidos = cria_pilha();
	return c;
}

void printa_medico(Medico doc){
	printf("%s, \n", doc.nome);
	printf("Idade: %d \n", doc.idade);
}

void arquiva_medico(Medico doc,FILE* arq)
{
	fprintf(arq,"%s","\n");
	fprintf(arq,"%s",doc.nome);
	fprintf(arq,"%s","\n");
	fprintf(arq,"%d",doc.idade);
}

void mostra_atendimentos(Medico doc, FILE* arq)
{
	
}



#endif
