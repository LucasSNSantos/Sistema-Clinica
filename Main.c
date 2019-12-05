#include<stdio.h>
#include"Interface.h"


int main()
{
	int contin = 1;
	int NumPacientes = 1;
	Fila_Prioridade* Atendimentos;
	ListaMedicos* MedicosDisp;
	
	Atendimentos = inicia_fila_de_prioridades();
	MedicosDisp = inicia_lista_medicos();
	cria_subfila_com_prioridade(Verde,Atendimentos);
	cria_subfila_com_prioridade(Amarelo,Atendimentos);
	cria_subfila_com_prioridade(Vermelho,Atendimentos);
	
	while(contin == 1)
	{
	switch(interface())
	{
		case 1:
			system("cls");
			sys_reg_Paciente(Atendimentos, &NumPacientes);
			break;
		case 2:
			sys_mostra_Pacientes(Atendimentos);
			break;
		case 3:
			system("cls");
			sys_reg_Medico(MedicosDisp);
			break;
		case 4:
			system("cls");
			sys_mostra_Medicos(MedicosDisp);
			break;
		case 5:
			contin = 0;
			break;
			
		default:
			printf("Codigo Invalido!");			
	}
		if (contin == 1){
		printf("\n");
		puts("Pressione 1 para continuar");
		puts("Pressione 2 para sair");
		fflush(stdin);
		scanf("%d", &contin);
		}
	}
	
		
	
	
	
	return 0;
}


