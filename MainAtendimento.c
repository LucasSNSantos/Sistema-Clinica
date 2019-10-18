#include<stdio.h>
#include"Elementos.h"
#include"ListaMedicos.h"
#include"URL.h"

int main(void){
	FILE* atendidos;
	atendidos = fopen(URLatendimento,"w");
	
	Medico dr1 = registra_medico(2,"Joao");
	Paciente j1 = registra_paciente(12,"Joaozin","72188",1);
	
	
	Lista_Med* medicos = init_lista();
	
	insere_inicio(medicos,dr1);
	insere_inicio(medicos,dr2);
	insere_inicio(medicos,dr3);
	
	mostra_medicos_disponiveis(medicos);
	escreve_atendimentos(medicos,atendidos);	
	
	
	return 0;
}
