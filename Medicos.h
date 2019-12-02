#ifndef MEDICOS_H
#define MEDICOS_H
#include<stdlib.h>
#include<string.h>
#include"PilhaPacientes.h"

struct medico{
	int codigo;
	char Nome[40];
	char Area[50];
	PilhaPacientes* pacientes;
};
typedef struct medico Medico;

void printa_medico(Medico m)
{
	printf(" ");
	printf("Nome: %s\n",m.Nome);
	printf("Area: %s\n",m.Area);
}

void printa_pacientes_atendidos_pelo_medico(Medico m)
{
	NO_Paciente* aux = m.pacientes->topo;
	while(aux != NULL)
	{
		printa_paciente(aux->paciente);
		aux = aux->ante;
	}
}

int atende_paciente(Medico m, Paciente p)
{
	if(empilha_paciente(m.pacientes,p))
	{
		return 1;
	}
	return 0;
}



#endif
