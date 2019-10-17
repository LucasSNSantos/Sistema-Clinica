#include<stdio.h>
#include"Elementos.h"
#include"ListaMedicos.h"
#include"URL.h"

int main(void){
	FILE* atendidos;
	atendidos = fopen(atendimento,"w");
	
	Medico dr1 = registra_medico(2,"Joao");
	Medico dr2 = registra_medico(3,"Vampiroso");
	Medico dr3 = registra_medico(1,"Velasquez");
	
	Lista_Med* medicos = init_lista();
	
	insere_inicio(medicos,dr1);
	insere_inicio(medicos,dr2);
	insere_inicio(medicos,dr3);
	
	mostra_medicos_disponiveis(medicos);
	escreve_atendimentos(medicos,atendidos);	
	
	
	return 0;
}
