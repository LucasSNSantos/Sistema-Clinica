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


//Iniciando a fila na memória
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

int fila_cheia(Fila* f)
{
	return f->cont == MAX;
}

int fila_vazia(Fila* f)
{
	return f->cont == 0;
}

//Inserir paciente na fila 
int inserir_paciente(Fila* f, Paciente p)
{
	if(f == NULL || fila_cheia(f)) return 0;
	f->pacientes[f->fim] = p;
	f->fim = (f->fim+1)%MAX;
	f->cont++;
	return 1;
}



//removendo pacien
Paciente sair_da_fila(Fila* f)
{
	Paciente temp;
	if(f != NULL || fila_vazia(f))
	{
		temp = f->pacientes[f->inicio];
		f->inicio = (f->inicio+1) % MAX;
		f->cont--;
		return temp;
	}else
	{
		return temp;
	}
}





#endif
