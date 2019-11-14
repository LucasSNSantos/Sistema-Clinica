#ifndef FILA_PACIENTES_H
#define FILA_PACIENTES_H
#include"objetos.h"
#include<stdlib.h>

#define MAX 1000


//Estrutura da Fila dos pacientes
struct fila{
	int inicio;
	int fim;
	int cont;
	Paciente pacientes[MAX];
};
typedef struct fila Fila;


Fila* cria_fila()
{
	Fila* f;
	f =	(Fila*) malloc(sizeof(Fila));
	if( f != NULL)
	{
		f->inicio = 0;
		f->fim = 0;
		f->cont = 0;
		return f;
	}
	return NULL;
}










#endif
