#ifndef MEDICOS_H
#define MEDICOS_H
#include"objetos.h"
#include<sdtlib.h>
#include<string.h>

#define max 5;

struct lista_do_medico{
	int ini;
	Paciente pacientes[max];
};

typedef struct lista_do_medico Lista;

Lista* cria_lista()
{
	Lista l = (Lista*) malloc(sizeof(Lista));
	if(l != NULL)
	{
		l->ini = 0;
		return l;
	}
	return NULL
}

void adiciona_paciente(Lista* f, Paciente p)
{
	if(f != NULL && f->ini != max)
	{
		f->pacientes[f->ini] = p;
		f->ini++;	
	}
}

Paciente remove_paciente(Lista* f, int codigo)
{
	Paciente temp;
	if(f != NULL && f->ini > 0)
	{
		int i;
		for(i = 0; i < f->ini - 1;i++)
		{
			if(f->pacientes[i].codigo == codigo)
			{
				temp = f->pacientes[i];
				return temp;
			}
		}
	}
	return temp;
}

void printa_lista_pacientes(Lista* li)
{
	if(li != NULL && li->ini >0 )
	{
		int i;
		for(i = 0; i < li->ini; i++)
		{
			printa_paciente(li->pacientes[i]);
		}
	}
}



struct medico{
	int codigo;
	int idade;
	char Nome[40];
	char Area[50];
	Lista* pacientes;
};
typedef struct medico Medico;

Medico registra_medico(int id, int idade, char* nome, char* area)
{
	Medico m;
	strcpy(m.Nome,nome);
	strcpy(m.Area,area);
	m.codigo = id;
	m.idade = idade;
	m.pacientes = cria_lista();
	return m;
}

int AtendePaciente(Medico m, Paciente p)
{
	if(m.pacientes != NULL && m.pacientes->ini < max)
	{
		adiciona_paciente(m.pacientes, p);
		return 1;
	}
	return 0;
}

Paciente LiberaPaciente(Medico m, int codigo)
{
	Paciente temp;
	if(m.pacientes != NULL && m.pacientes->ini > 0)
	{
		temp = remove_paciente(m.pacientes,codigo);
		return temp;
	}
	return temp;
}

void printa_medico(Medico m)
{
	printf(" ");
	printf("Nome: %s\n",m.Nome);
	printf("Idade: %d\n",m.idade);
	printf("Area: %s\n",m.Area);
	if(m.pacientes != NULL && m.pacientes->ini > 0)
	{
		printf("Pacientes de %s\n", m.Nome);
		printf("Quantidade de pacientes: %d", m.pacientes->ini);
		printa_lista_pacientes(m.pacientes);
	}else
	{
		printf("Nenhum paciente atendido\n");
	}
	
}



#endif
