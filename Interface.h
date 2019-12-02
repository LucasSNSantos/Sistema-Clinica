#ifndef INTERFACE_H
#define INTERFACE_H
#include"FilaPrioridade.h"
#include"ListaMedicos.h"
#include"Pacientes.h"
#include<stdio.h>
#include<stdlib.h>

int interface()
{
	int u;
	system("cls");
	puts("+>>>>>>>>_Clinica Florence Nightingale_<<<<<<<<<+\n");
	puts("|    Pressione 1 para Cadastrar um Paciente     |");
	puts("|    Pressione 2 para Pacientes Cadastrados     |");
	puts("|    Pressione 3 para Cadastrar um Medico       |");
	puts("|    Pressione 4 para Medicos Disponiveis       |");
	puts("|    Pressione 5 para SAIR                      |");
	puts("|_______________________________________________|");
	scanf("%d", &u);
	return u;
}

int sys_reg_Paciente(Fila_Prioridade* fila)
{
	Paciente reg;
	puts("Digite o Codigo do paciente:");
	fflush(stdin);
	scanf("%d", &reg.codigo);
	
	puts("Digite a Idade do paciente:");
	fflush(stdin);
	scanf("%d", &reg.idade);
	
	puts("Digite o Sexo do paciente:");
	fflush(stdin);
	scanf("%[^\n]s", &reg.Sexo);
		
	puts("Digite o Nome do paciente:");
	fflush(stdin);
	scanf("%[^\n]s", &reg.Nome);
		
	puts("Digite o CPF do paciente:");
	fflush(stdin);
	scanf("%[^\n]s", &reg.CPF);
	
	puts("Digite a Anamnese e a Queixa Principal do paciente:");
	fflush(stdin);
	gets(reg.Anamnese);
	
	puts("Prioridade do Paciente( 1 - Baixa / 2 - Media  / 3 - Alta ):");
	fflush(stdin);
	scanf("%d", &reg.prioridade);
	
	if(reg.prioridade < 1)
	{
		reg.prioridade = 1;
	}else if(reg.prioridade > 3)
	{
		reg.prioridade = 3;
	}
	insere_paciente_com_prioridades(fila,reg);
	return 1;
}

int sys_reg_Medico(Fila_Prioridade* fila)
{
	//TODO
}

int sys_mostra_Pacientes(Fila_Prioridade* fila)
{
	//TODO
}

int sys_mostra_Medicos(ListaMedicos* li)
{
	printa_lista_medicos(li);
}






#endif
