#ifndef LISTA_MEDICOS_H
#define LISTA_MEDICOS_H
#include<stdio.h>
#include<stdlib.h>
#include"Medicos.h"
#define MAX 100

typedef struct list{
	int ini;
	Medico medicos[MAX];
}Lista_Med;

Lista_Med* init_lista(){
	Lista_Med* nova;
	nova = (Lista_Med*) malloc(sizeof(Lista_Med));
	if(nova != NULL){
		nova->ini = 0;
		return nova;
	}
	return NULL;
}

void ordena_lista(Lista_Med* li)
{
	Medico aux;
	int n = 1;
	int troca = 1;
	while(n <= li->ini && troca == 1)
	{
		int i;
		troca = 0;
		for(i = 0; i != li->ini - 2; i ++)
		{
			if(li->medicos[i].idade < li->medicos[i+1].idade)
			{
			troca = 1;
			aux = li->medicos[i];
			li->medicos[i] = li->medicos[i+1];
			li->medicos[i+1] = aux;	
			}
		}
		n++;		
	}
}


void adiciona_inicio(Lista_Med* li, Medico p){
	if(li != NULL && li->ini != MAX - 1){
		li->medicos[li->ini] = p;
		li->ini++;
	}
}

void mostra_medicos_disponiveis(Lista_Med* li)
{
	int i;
	if(li != NULL)
	{
		for(i = 0; i < li->ini; i++)
		{
			printa_medico(li->medicos[i]);			
		}
	}
}




#endif
