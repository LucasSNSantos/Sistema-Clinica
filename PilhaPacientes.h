#ifndef PILHA_DE_PACIENTES_H
#define PILHA_DE_PACIENTES_H
#include"Pacientes.h"
#include<stdlib.h>
#include<stdio.h>


typedef struct no_paciente{
	Paciente paciente;
	struct no_paciente* prox;
	struct no_paciente* ante;
} NO_Paciente;

typedef struct pilha_paciente{
	int tam;
	NO_Paciente* topo;
} PilhaPacientes;

NO_Paciente* registra_no_do_Paciente(Paciente p)
{
	NO_Paciente* novo = (NO_Paciente*) malloc(sizeof(NO_Paciente));
	if(novo != NULL)
	{
		novo->paciente = p;
		novo->ante = NULL;
		novo->prox = NULL;
		return novo;		
	}
	return NULL;
}

PilhaPacientes* inicia_Pilha_Pacientes()
{
	PilhaPacientes* novo = (PilhaPacientes*) malloc(sizeof(PilhaPacientes));
	if(novo != NULL)
	{
		novo->topo = NULL;
		novo->tam = 0;
		return novo;			
	}
	return NULL;
}


int empilha_paciente(PilhaPacientes* pi, Paciente p)
{
	if(pi == NULL) return 0;
	if(pi->topo = NULL)
	{
		pi->topo = registra_no_do_Paciente(p);
		pi->tam++;
		return 1;
	}
	pi->topo->prox = registra_no_do_Paciente(p);
	pi->topo->prox->ante = pi->topo;
	pi->topo = pi->topo->prox;
	pi->tam++;
	return 1;	
}

Paciente desempilha_paciente(PilhaPacientes* pi)
{
	Paciente temp;
	if(pi == NULL) return temp;
	temp = pi->topo->paciente;
	pi->topo = pi->topo->ante;
	pi->tam--;
	return temp;
}


void printa_pilha_Pacientes(PilhaPacientes* pi)
{
	if(pi != NULL && pi->topo != NULL)
	{
		NO_Paciente* aux = pi->topo;
		while(aux != NULL)
		{
			printa_paciente(aux->paciente);
			aux = aux->ante;
		}
	}
}




#endif
