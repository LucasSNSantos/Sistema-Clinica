#ifndef LISTA_MEDICOS_H
#define LISTA_MEDICOS_H
#include<stdio.h>
#include<stdlib.h>
#include"Medicos.h"
#include"URL.h"
#define MAX 10

typedef struct list{
	int ini;
	Medico medicos[MAX];
}Lista_Med;


Lista_Med* init_lista(){
	Lista_Med* nova;
	nova = (Lista_Med*) malloc(sizeof(Lista_Med));
	nova->ini = 0;
	return nova;
}



int insere_inicio(Lista_Med* li, Medico p)
{
	if(li == NULL || li->ini == MAX - 1)
	{
		printf("\nLista invalida\n");
		return 0;	
	}  
	li->medicos[li->ini] = p;
	li->ini++;
	return 1;
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


void escreve_atendimentos(Lista_Med* li,FILE* f)
{
	int i;
	if(li != NULL)
	{
		for(i = 0; i < li->ini; i++)
		{
			arquiva_medico(li->medicos[i],f);
		}
	}
}




#endif
