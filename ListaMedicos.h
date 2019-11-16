#ifndef LISTA_MEDICOS_H
#define LISTA_MEDICOS_H

#include<stdlib.h>
#include"Medicos.h"


typedef struct no_medico{
	Medico m;
	struct no_medico* prox;
	struct no_medico* ante;
} No;

No* preenche_no(Medico m)
{
	No n = (No*) malloc(sizeof(No));
	if(n != NULL)
	{
		n->m = m;
		n->ante = NULL;
		n->prox = NULL;
		return n;
	}
	return NULL;
}


struct lista{
	int tam;
	No* inicio;
};
typedef struct lista ListaMedicos;


ListaMedicos* inicia_lista_medicos()
{
	ListaMedicos* l = (ListaMedicos*) malloc(sizeof(ListaMedicos));
	if(l != NULL)
	{
		l->inicio = NULL;
		l->tam = 0;
		return l;
	}
	return NULL;
}

int insere_medico(ListaMedicos* li, Medico m)
{
	if(li == NULL) return 0;
	No* aux;
	aux = li->inicio;
	if(aux == NULL)
	{
		li->inicio = preenche_no(m);
		li->tam++;
		return 1;
	}
	
	while(aux->prox != NULL)
	{
		aux = aux->prox;
	}
	aux->prox = preenche_no(m);
	aux->prox->ante = aux;
	li->tam++;
	return 1;	
}

Medico busca_medico(ListaMedicos* li, int codigo)
{
	Medico temp;
	if(li != NULL && li->inicio > 0)
	{
		No* aux = li->inicio;
		while(aux->m.codigo != codigo)
		{
			aux = aux->prox;
		}
		temp = aux->m;
		return temp;
	}
	return temp;
}






#endif
