#ifndef FILA_PACIENTES_H
#define FILA_PACIENTES_H
#include"Pacientes.h"
#include<stdio.h>
#include<stdlib.h>


//No da fila simles: o Paciente
typedef struct no_simples
{
	Paciente no_paciente;
	struct no_simples * prox;
} No_Paciente;

//Estrutura da fila simples, que serão agrupadas por prioridade
typedef struct no_fila
{
	int prioridade_da_fila;	
	struct no_fila* prox_fila;
	No_Paciente* inicio;
	No_Paciente* final;
}Fila_Simples;

//Criando paciente na memoria
No_Paciente* registra_no_Paciente(Paciente p)
{
	No_Paciente* novo = (No_Paciente*) malloc(sizeof(No_Paciente));
	if(novo != NULL)
	{
		novo->no_paciente = p;
		novo->prox = NULL; 
		return novo;
	}
	return NULL;
}


Fila_Simples* inicio_da_fila_simples(int pri)
{
	Fila_Simples* novo = (Fila_Simples*) malloc(sizeof(Fila_Simples));
	if(novo != NULL)
	{
		novo->prioridade_da_fila = pri;
		novo->inicio = NULL;
		novo->final = NULL;
		novo->prox_fila = NULL;
		return novo;
	}
	return NULL;
}

int adiciona_na_fila_simples(Fila_Simples* fi, Paciente p)
{
	if(fi == NULL) return 0;
	if(fi->inicio == NULL)
	{
		fi->inicio = registra_no_Paciente(p);
		fi->final = fi->inicio;
		return 1;
	}
	
	No_Paciente* aux;
	aux = fi->inicio;
	while(aux->prox != NULL)
	{
		aux = aux->prox;
	}
	
	aux->prox = registra_no_Paciente(p);
	fi->final = aux->prox;	
	return 1;
}

Paciente desenfileira_fila_simples(Fila_Simples* fi)
{
	Paciente temp;
	if(fi == NULL || fi->inicio == NULL)
	{
		return temp;	
	} 
	temp = fi->inicio->no_paciente;
	fi->inicio = fi->inicio->prox;
	return temp;
}

int tamanho_da_fila_simples(Fila_Simples* fi)
{
	int tam = 0;
	if(fi == NULL || fi->inicio == NULL) return 0;
	else
	{
		No_Paciente* aux = fi->inicio;
		while(aux->prox != NULL)
		{
			tam++;
		}
		return tam;
	}
}

void printa_fila_simples(Fila_Simples* fi)
{
	if(fi != NULL || fi->inicio != NULL)
	{
		No_Paciente* aux;
		aux = fi->inicio;
		while(aux != NULL)
		{
			printa_paciente(aux->no_paciente);
			aux = aux->prox;
		}
	}
}






#endif





