#include<stdio.h>
#include"Elementos.h"
#include"ListaMedicos.h"


int main(void){
	
	Medico dr1 = registra_medico(2,"Joao");
	Medico dr2 = registra_medico(3,"Vampiroso");
	Medico dr3 = registra_medico(1,"Velasquez");
	int i;
	

	
	Lista_Med* lista = init_lista();
	
	printf("Inserindo na Lista: \n");
	adiciona_inicio(lista,dr1);
	adiciona_inicio(lista,dr2);
	adiciona_inicio(lista,dr3);
	
	mostra_medicos_disponiveis(lista);
	
//	ordena_lista(lista);
//	
//	printf("\n");
//	printf("Lista depois de ordenada: \n");
//	
//	mostra_medicos_disponiveis(lista);
	
	
	
	
	
	
	return 0;
}
