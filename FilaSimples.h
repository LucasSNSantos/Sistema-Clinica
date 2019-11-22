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
	struct no_simples * ante;			
} No_Paciente;

//Estrutura da fila simples, que serão agrupadas por prioridade
typedef struct no_fila
{
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
		novo->ante = NULL;
		novo->prox = NULL; 
		return novo;
	}
	return NULL;
}


Fila_Simples* inicio_da_fila_simples()
{
	Fila_Simples* novo = (Fila_Simples*) malloc(sizeof(Fila_Simples));
	if(novo != NULL)
	{
		novo->inicio = NULL;
		novo->final = NULL;
		novo->prox_fila = NULL;
		return novo;
	}
	return NULL;
}

int adiciona_na_fila_simples(Fila_Simples* fi,Paciente p)
{
	if(fi == NULL) return 0;
	if(fi->inicio == NULL)
	{
		fi->inicio = registra_no_Paciente(p);
		fi->final = fi->inicio;
		
	}
	
	
	
}






#endif





