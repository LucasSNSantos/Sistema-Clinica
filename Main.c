#include <stdio.h>
#include <stdlib.h>
#include"Elementos.h"
#include"Interface.h"



main(){
	int en,  x = 0;
	while(x==0){
	
		puts("Bem Vindo a Clinica BCSB:");
		puts("___________________________________________________________________________________________________________\n");
		puts("Pressione 1 para registrar");
		puts("Pressione 2 para visualizar");
		puts("Pressione 3 para sair");
		scanf("%d", &en);
		system("CLS");
		switch(en){
			case 1:
				menu1();
				break;
			case 2:
				menu2();
				break;
			case 3:
				x = 1;
				break;
			default:
				puts("ERRO: comando invalido\n\n");
				break;
		}
	}
}

