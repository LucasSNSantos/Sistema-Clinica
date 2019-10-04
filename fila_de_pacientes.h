#include"Elementos.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct no{
	Paciente dados;
	struct no *prox;
} NO;

typedef struct{
	NO *ini;
	NO *fim;
}FILA; 

FILA* cria_fila(){ 
	FILA *fi = (FILA*) malloc(sizeof(FILA));
	if(fi != NULL){ 
		fi->fim = NULL;  
		fi->ini = NULL;
	}
	return fi;
}	

int fila_vazia(FILA *f){
	if(f==NULL || f->ini==NULL) return 1;
	return 0;
}

int enfileira(FILA *f, Paciente p){ 
	if(f==NULL) return 0;
	NO *novo_no = (NO*)malloc(sizeof(NO));
	if(novo_no==NULL) return 0; 
	novo_no->dados=p;
	novo_no->prox=NULL;
	if(f->ini==NULL){
		f->ini = novo_no;
		f->fim = novo_no;
	}else{
		NO *aux = f->ini;
		while(aux->prox != NULL){
			aux = aux->prox;
		}
		aux->prox = novo_no;
	}
	return 1;
}

int desenfileira(FILA *f, Paciente *p){ 
	if(f==NULL) return 0;
	NO *aux = f->ini;
	
	strcpy(p->nome, aux->dados.nome);
	strcpy(p->sexo, aux->dados.sexo);
	strcpy(p->cpf, aux->dados.cpf);
	p->idade = aux->dados.idade;
	p->prioridade = aux->dados.prioridade;
		
	f->ini = aux->prox;
	free(aux);

	return 1;
}


int imprime_fila(FILA *f){
	if(fila_vazia(f)) return 0;
	NO *aux = f->ini;
	while (aux!=NULL){
		
	aux=aux->prox;
	}
	return 1;
}


void destroi_fila(FILA *f){
	NO *atu = f->ini;
	while (atu!=NULL){
		f->ini=atu->prox;
		free(atu);
		atu=f->ini;
	}
	f=NULL;
}

