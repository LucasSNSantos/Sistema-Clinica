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
	fflush(stdin);
	scanf("%d", &u);
	return u;
}

void sys_reg_Paciente(Fila_Prioridade* fila)
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
	
	FILE *file;
	file=fopen("pacientesfila.txt", "w");
	if(file==NULL){
		printf("Arquivo nao pode ser aberto");
		getchar();
		exit(1);
	}
	fprintf(file, "\n Codigo: %d \n", reg.codigo);
	fprintf(file, "Idade: %d \n", reg.idade);
	fprintf(file, "Sexo: %s \n", reg.Sexo);
	fprintf(file, "Nome: %s \n", reg.Nome);
	fprintf(file, "CPF: %s \n", reg.CPF);
	fprintf(file, "Prioridade: %d \n", reg.prioridade);
	char frase[]= "\n\n________________\n\n";
	fputs(frase, file);
	char caractere='.';
	fputc(caractere, file);
	
	fclose(file);
	
	system ("pause");
return 0;

}

void sys_reg_Medico(ListaMedicos* li)
{
	Medico temp;
	puts("Digite o CRM: ");
	fflush(stdin);
	scanf("%d", &temp.codigo);
	
	puts("Digite o Nome: ");
	fflush(stdin);
	scanf("%[^\n]s", &temp.Nome);
	
	puts("Digite a Especialidade do Medico: ");
	fflush(stdin);
	scanf("%[^\n]s", &temp.Area);
	
	temp.pacientes = inicia_Pilha_Pacientes();
	
	insere_medico(li,temp);
	
		FILE *file;
	file=fopen("medicos.txt", "a");
	if(file==NULL){
		printf("Arquivo nao pode ser aberto");
		getchar();
		exit(1);
	}
	fprintf(file, "\n CRM: %d \n", temp.codigo);
    fprintf(file, "Nome: %s \n", temp.Nome);
	fprintf(file, "Especialidade: %s \n", temp.Area);
	char frase[]= "\n\n________________\n\n";
	fputs(frase, file);
	char caractere='.';
	fputc(caractere, file);
	
	fclose(file);
	
	system ("pause");
return 0;

}

int sys_mostra_Pacientes(Fila_Prioridade* fila)
{
	printa_fila_de_prioridades(fila);
}

int sys_mostra_Medicos(ListaMedicos* li)
{
	if(li== NULL || li->inicio == NULL) return 0;
	else
	{
		printa_lista_medicos(li);	
	}
}








#endif
