#ifndef FILA_PRIORITARIA_H
#define FILA_PRIORITARIA_H
#include"FilaSimples.h"


//Estrutura que vai agrupar as filas de acordo com a prioridade
typedef struct no_fila_prioridade
{
	  Fila_Simples* inicio;
	  Fila_Simples* final;
} Fila_Prioridade;

Fila_Prioridade* inicia_fila_de_prioridades()
{
	Fila_Prioridade* novo = (Fila_Prioridade*) malloc(sizeof(Fila_Prioridade));
	if(novo != NULL)
	{
		novo->inicio = NULL;
		novo->inicio = NULL;
		return novo;
	}
	return NULL;
}

int cria_subfila_com_prioridade(int prioridade_da_fila, Fila_Prioridade* fila)
{
	if(fila == NULL) return 0;
	
	if(fila->inicio == NULL)
	{
		fila->inicio = inicio_da_fila_simples(prioridade_da_fila);
		fila->final = fila->inicio;
		return 1;
	}
	
	Fila_Simples* aux;
	aux = fila->inicio;
	while(aux->prox_fila != NULL)
	{
		aux = aux->prox_fila;
	}
	aux->prox_fila = inicio_da_fila_simples(prioridade_da_fila);	
	fila->final = aux->prox_fila;	
}

int insere_paciente_com_prioridades(Fila_Prioridade* fila, Paciente p)
{
	Prioridade pri = p.prioridade;
	if(fila == NULL) return 0;
	Fila_Simples* aux;
	aux = fila->inicio;
	while(aux->prox_fila != NULL || aux->prioridade_da_fila != pri)
	{
		aux = aux->prox_fila;
	}
	adiciona_na_fila_simples(aux,p);
	return 1;
}

int tamanho_fila_prioridades(Fila_Prioridade* fila)
{
	int cont = 0;
	if(fila == NULL)
	{
		return 0;
	}
	
	Fila_Simples* aux;
	aux = fila->inicio;
	if(aux == NULL) return 0;
	while(aux != NULL)
	{
		cont++;
		aux = aux->prox_fila;
	}
	return cont;
}




#endif
