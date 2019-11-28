#include<stdio.h>
#include"Interface.h"


int main()
{
	Fila_Prioridade* Atendimentos;
	Atendimentos = inicia_fila_de_prioridades();
	cria_subfila_com_prioridade(Vermelho,Atendimentos);
	cria_subfila_com_prioridade(Amarelo,Atendimentos);
	cria_subfila_com_prioridade(Verde,Atendimentos);
	
	int retorno = interface();
	switch(retorno)
	{
		case 1:
			system("cls");
			sys_reg_Paciente(Atendimentos);
			break;
		case 2:
			printf("Medico");
			break;
		case 3:
			printf("Procura Paciente");
			break;
		case 4:
			printf("Procura Medico");
			break;
		default:
			printf("Default");				
	}
	
		
	
	
	
	return 0;
}


