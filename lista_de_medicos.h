#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Elementos.h"



typedef struct no{
	Medico dados;
	struct no *prox;
} NO;

typedef NO* LISTA; // Ponteiro para um Ponteiro

LISTA* cria_lista(){ // ela irá alocar um espaço na memória;
	LISTA *li = (LISTA*) malloc(sizeof(LISTA));
	if(li != NULL) // Deu certo a alocação
		*li = NULL;  // Faz o ponteiro apontar para NULL, ou seja, a lista está vazia
	return li;
}	

int listase_vazia(LISTA *l){
	if(l==NULL) return 1;
	return 0;
}

int insere_listase(LISTA *l, Medico c){ 
	if(l==NULL) return 0;
	NO *novo_no = (NO*)malloc(sizeof(NO));
	if(novo_no==NULL) return 0; 
	novo_no->dados= c;
	novo_no->prox=NULL;
	if((*l)==NULL)
		*l = novo_no;
	else{
		NO *aux = *l;
		while(aux->prox != NULL){
			aux = aux->prox;
		}
		aux->prox = novo_no;
	}
	return 1;
}


void imprime_listase(LISTA *l){
	NO *aux = *l;
	while (aux!=NULL){
		printf("Nome %s; Idade: %d \n", aux->dados.nome, aux->dados.idade);
		aux=aux->prox;
	}
}

NO *busca_listase(LISTA *l, Medico m){
	NO *atu = *l;
	while((atu!=NULL)&&(strcmp(atu->dados.nome, m.nome)!= 0)){
		atu=atu->prox;
	}
	if (atu==NULL) return NULL;
	return atu;
}

int tamanho_listase(LISTA *l){
    int cont=0;
    NO *atu = *l;
    while(atu!=NULL){
        cont++;
        atu=atu->prox;
    }
    return cont;
}

void destroi_listase(LISTA *l){
	NO *atu = *l;
	while (atu!=NULL){
		*l=atu->prox;
		free(atu);
		atu=*l;
	}
	*l=NULL;
}


