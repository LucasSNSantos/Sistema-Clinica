#ifndef INTERFACE_H
#define INTERFACE_H

void menu2(){
	int i;
	puts("Visualizar\n");
	puts("Pressione 1 para paciente");
	puts("Pressione 2 para medico");
	puts("Pressione 3 para sair");
}

void menu1(){
	int enn, y1 = 0, conf, regis = 0;
	int i, pri;
	char n, cpf;
	while(y1==0){
		
		puts("Registrar\n");
		puts("Pressione 1 para paciente");
		puts("Pressione 2 para medico");
		puts("Pressione 3 para sair");
		scanf("%d", &enn);
		system("CLS");
		switch(enn){
			case 1:
				while(regis == 0){
					
					puts("Insira a idade:");
					scanf("%d", &i);
					puts("Insira o nome:");
					scanf("%s", &n);
					puts("Insira o cpf:");
					scanf("%s", &cpf);
					puts("Insira a prioridade:");
					scanf("%d", &pri);
					//registra_paciente(i, n, cpf, pri);
					system("CLS");
						//printa_paciente(n)
						puts("\n");
						puts("Deseja Confirmar ? 1=Sim");
						scanf("%d", &conf);
						switch(conf){
							case 1:
								system("CLS");
								y1 = 1;
								regis = 1;
								break;
							default:
								//sobrescrever
								break;
						}
					system("CLS");
				}
					break;
				case 2:
					while(regis == 0){
					
						puts("Insira o nome:");
						scanf("%s", &n);
						puts("Insira a idade:");
						scanf("%d", &i);
						//registra_medico(n, i);
						system("CLS");
						//printa_medico(n)
						puts("\n");
						puts("Deseja Confirmar ? 1=Sim");
						scanf("%d", &conf);
						switch(conf){
							case 1:
								system("CLS");
								y1 = 1;
								regis = 1;
								break;
							default:
								//sobrescrever
								break;
						}
						system("CLS");
					}
					break;
					
				case 3:
					y1 = 1;
					system("CLS");
					break;
				default:
					puts("ERRO: comando invalido\n\n");
					y1 = 1;
					break;
		}
	}
}




#endif
