#include<stdio.h>
#include"Interface.h"
#include"FilaPrioridade.h"


int main()
{
	Fila_Prioridade* Atendimentos;
	Atendimentos = inicia_fila_de_prioridades();
	cria_subfila_com_prioridade(Vermelho,Atendimentos);
	cria_subfila_com_prioridade(Amarelo,Atendimentos);
	cria_subfila_com_prioridade(Verde,Atendimentos);
	
	int retorno = interface();
	if(retorno == 5)
	{
		exit(0);
	}
		
	
	
	
	return 0;
}


