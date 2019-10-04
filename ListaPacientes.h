#ifndef LISTA_PACIENTE_H
#define LISTA_PACIENTE_H
#include"Elementos.h";
#include<stdlib.h>

typedef struct node_paciente{
	Paciente dado;
	struct node_paciente* prox;
	struct node_paciente* ante;
} Registro_Paciente;

Registro_Paciente* novo_registro(Paciente novo){
	Registro_Paciente* n;
	n = (Registro_Paciente*) malloc(sizeof(Registro_Paciente));
	if(n != NULL){
		n->prox = NULL;
		n->ante = NULL;
		return n;
	}
	return NULL; 
}




#endif
