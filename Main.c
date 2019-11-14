#include<stdio.h>
#include"FilaPacientes.h"


int main()
{
	Fila* Principal = cria_fila();
	Paciente temp;
	
	int i;
	for(i = 0; i < 2; i++)
	{
		scanf("%s %d", &temp.Nome, &temp.idade);
		inserir_paciente(Principal,temp);	
	}
	for(i = 0; i < 2; i++)
	{
		printa_paciente(Principal->pacientes[i]);
	}
	
	
	
	
}
