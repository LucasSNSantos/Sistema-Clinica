#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include"Elementos.h"



typedef struct no{
	Paciente dados;
	struct no *prox;
} NO;

typedef struct{
	NO *topo;
}PILHA;

PILHA* cria_pilha(){ 
	PILHA *pi = (PILHA*) malloc(sizeof(PILHA));
	if(pi != NULL) 
		pi->topo = NULL;  
	return pi;
}	

int pilha_vazia(PILHA *p){
	if(p==NULL || p->topo==NULL) return 1;
	return 0;
}

int empilha(PILHA *p, Paciente c){ 
	if(p == NULL) return 0;
	NO *novo_no = (NO*)malloc(sizeof(NO));
	if(novo_no==NULL) return 0; 
	novo_no->dados= c;
	novo_no->prox=p->topo;
	p->topo = novo_no;
	return 1;
}


int desempilha(PILHA *p, Paciente *c){ 	
	if(pilha_vazia(p)) return 0;
	NO *aux = p->topo;
	
	strcpy(p->nome, aux->dados.nome);
	strcpy(p->sexo, aux->dados.sexo);
	strcpy(p->cpf, aux->dados.cpf);
	p->idade = aux->dados.idade;
	p->prioridade = aux->dados.prioridade;
	
	p->topo = aux->prox;
	
	free(aux);

	return 1;
}


void imprime_pilha(PILHA *p,FILE* arq){
	fprintf(arq,"%s","\n==============Pacientes Atendidos==============\n");	
	if(pilha_vazia(p)){
		fprintf(arq,"%s","Pilha Vazia!\n");	
		return;
	} 
	NO *aux = p->topo;
	while (aux!=NULL){
		printf(arq,"%s %s, %d anos, %s, %s, %s|", aux->dados.nome, aux->dados.idade, (aux->dados.sexo=='F'?"Fem.":"Masc."), aux->dados.prioridade , aux->dados.cpf);
		aux=aux->prox;
	}
	fprintf(arq,"%s","==================================================\n");	
}

int tamanho_pilha(PILHA *p){
    int cont=0;
    if(!pilha_vazia(p)) {
	    NO *atu = p->topo;
	    while(atu!=NULL){
	        cont++;
	        atu=atu->prox;
	    }
	}
    return cont;
}

void destroi_pilha(PILHA *p){
	if(!pilha_vazia(p)){
		NO *atu = p->topo;
		while (atu!=NULL){
			*p->topo = *atu->prox;
			free(atu);
			atu = p->topo;
		}		
	}
	p=NULL;
}


