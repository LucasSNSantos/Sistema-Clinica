#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int interface(){
	int u;
	system("cls");
	puts("Clinica Florence Nightingale\n");
	puts("Pressione 1 para cadastrar um cliente");
	puts("Pressione 2 para ");
	puts("Pressione 3 para ");
	scanf("%d", &u);
	return u;
}

sysgen(int e){
	int x, u;
	system("cls");
	switch(e) {
	case 1:
		puts("Clinica Nero Claudius\n");
		break;
	case 2:
		puts("Clinica Jeanne D'arc'\n");
		break;
	case 3:
		puts("Clinica Queen Artoria\n");
		break;
	default:
		puts("Clinica Abigail Willians\n");
		break;
	}
	syscon();
}

syscon(){
	int u, x;
	puts("Pressione 1 para continuar");
	puts("Pressione 2 para sair");
	scanf("%d", &u);
	if(u==1){
		x = interface();
		sysgen(x);	
	} else if (u!=2){
		system("cls");
		puts("Erro! Entrada Invalida");
		syscon();
	}
}


int main(){
	int x;
	x = interface();
	sysgen(x);	
	
	
}
