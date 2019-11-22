#include<stdio.h>


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
		puts("Clinica Florence Nightingale\n");
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
	puts("Pressione 1 para continuar");
	puts("Pressione 2 para sair");
	scanf("%d", &u);
	if(u==1){
		x = interface();
		sysgen(x);	
	}
}

syscon(u){
}


	
	
};
