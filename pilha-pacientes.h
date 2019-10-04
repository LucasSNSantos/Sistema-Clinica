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

PILHA* cria_pilha(){ // ela ir� alocar um espa�o na mem�ria;
	PILHA *pi = (PILHA*) malloc(sizeof(PILHA));
	if(pi != NULL) // Deu certo a aloca��o
		pi->topo = NULL;  // Faz o ponteiro apontar para NULL, ou seja, a pilha est� vazia
	return pi;
}	

int pilha_vazia(PILHA *p){
	if(p==NULL || p->topo==NULL) return 1;
	return 0;
}

// Fun��o que insere no topo da pilha
int empilha(PILHA *p, Paciente c){ 
	if(p == NULL) return 0;
	NO *novo_no = (NO*)malloc(sizeof(NO));
	if(novo_no==NULL) return 0; // N�o alocou mem�ria
	// atribuir os valores para o novo n�;
	novo_no->dados= c;
	// Faz o novo n� apontar para o n� do topo da pilha
	novo_no->prox=p->topo;
	// Desloca o topo fazendo-o apontar para o novo n�
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
	
	// Desloca o topo fazendo-o apontar para o pr�ximo n�
	p->topo = aux->prox;
	
	// Libera o n� desempilhado
	free(aux);

	return 1;
}


void imprime_pilha(PILHA *p){
	printf("\n==============TOPO==============\n");	
	if(pilha_vazia(p)){
		printf("Pilha Vazia!\n");	
		return;
	} 
	NO *aux = p->topo;
	while (aux!=NULL){
		printf("%s, %d anos, %s, %s, %s|", aux->dados.nome, aux->dados.idade, (aux->dados.sexo=='F'?"Fem.":"Masc."), aux->dados.prioridade , aux->dados.cpf);
		aux=aux->prox;
	}
	printf("==============BASE==============\n");	
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


