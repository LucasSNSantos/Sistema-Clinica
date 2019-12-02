#include<stdio.h>
#include"Interface.h"


int main()
{
	int contin = 1;
	Fila_Prioridade* Atendimentos;
	ListaMedicos* MedicosDisp;
	
	Atendimentos = inicia_fila_de_prioridades();
	MedicosDisp = inicia_lista_medicos();
	cria_subfila_com_prioridade(Vermelho,Atendimentos);
	cria_subfila_com_prioridade(Amarelo,Atendimentos);
	cria_subfila_com_prioridade(Verde,Atendimentos);
	
	while(contin == 1){
	int retorno = interface();
	switch(retorno)
	{
		case 1:
			system("cls");
			sys_reg_Paciente(Atendimentos);
			break;
		case 2:
			printf("Mostra Paciente");
			break;
		case 3:
			printf("Registra Medico");
			break;
		case 4:
			system("cls");
			sys_mostra_Medicos(MedicosDisp);
			break;
		case 5:
			contin = 0;
		default:
			printf("Codigo Invalido!");
			break;			
	}
		if (contin == 1){
		printf("\n");
		puts("Pressione 1 para continuar");
		puts("Pressione 2 para sair");
		scanf("%d", &contin);
		}
	}
	
		
	
	
	
	return 0;
}


