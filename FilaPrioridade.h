#ifndef FILA_PRIORITARIA_H
#define FILA_PRIORITARIA_H
#include"FilaSimples.h"
#define No_Fila Fila_Simples

//Estrutura que vai agrupar as filas de acordo com a prioridade
typedef struct no_fila_prioridade
{  
	No_Fila* prox;
	No_Fila* ante;
	
} Fila_Prioridade;





#endif
