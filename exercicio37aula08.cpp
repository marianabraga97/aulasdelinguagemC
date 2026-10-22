#include <stdio.h>

	int main(){ 
	
		int i, qnt_func, pos_menorA, enc_a = 0;
		float somaA = 0,somaB = 0, menor_salarioA;
		
		printf("Quantidade de funcionarios na empresa: ");
		scanf("%d", &qnt_func);
		
		while(qnt_func <=0){
			printf("Quantidade de funcionarios invalida! Digite a quantidade de funcionarios na empresa: ");
			scanf("%d", &qnt_func);
		}
		
		char sexo[qnt_func];
		char dpt[qnt_func];
		int idade[qnt_func], pos_maior;
		float salario[qnt_func], media_geral, soma_geral = 0, maior_salario;
		
		for(i=0; i < qnt_func; i++){
			printf("\nDigite qual departamento esse funcionario e A ou B: ");
			scanf(" %c", &dpt[i]);
			
			while(dpt[i] != 'A' && dpt[i] !='a' && dpt[i] !='B' && dpt[i] !='b'){
				printf("Departamento invalido! Digite o departamento A ou B: ");
				scanf(" %c", &dpt[i]);
			}
				
			printf("\nDigite a idade do funcionario(a): ");
			scanf("%d", &idade[i]);
			
			while(idade[i] <= 0){
				printf("Idade invalida! Digite a idade do funcionario(a): ");
				scanf("%d", &idade[i]);
			}
				
			printf("\nDigite o sexo M ou F: ");
			scanf(" %c", &sexo[i]);
			
			while(sexo[i] != 'M' && sexo[i] !='m' && sexo[i] !='F' && sexo[i] !='f'){
			printf("Caracter invalido! Digite o sexo M ou F: ");
			scanf(" %c", &sexo[i]);
			}
			
			printf("\nDigite o valor do salario do funcionario(a): ");
			scanf("%f", &salario[i]);
			
			while(salario[i] <=0){
				printf("Valor incorreto! Digite o valor do salario do funcionario(a): ");
				scanf("%f", &salario[i]);
				}
				
				soma_geral += salario[i];
			}
			
			
			media_geral = soma_geral / qnt_func;
			
			for(i=0; i < qnt_func; i++){
				if(salario[i] > media_geral){
					printf("Funcionario: %d - Departamento: %c, Salario: R$ %.2f\n",i+1, dpt[i]), salario[i]);
				}
			}
			
			for(i = 0; i < qnt_func; i++){
				if(dpt[i] == 'A'|| dpt[i] == 'a'){
				
				somaA += salario[i];
				
				printf("\nFuncionario %d - Salario: R$%.2f\n", i+1, salario[i]);
			}
		}
		
			printf("\nSoma total dos salarios do departamento A: R$%.2f\n", somaA);
		
			for(i = 0; i < qnt_func; i++){
				if(dpt[i] == 'B' || dpt [i] == 'b'){
				
				somaB += salario[i];
				
				printf("\nFuncionario: %d - Idade: %d, Salario: R$%.2f\n", i+1, idade[i], salario[i]);
			}	
		}
		
			printf("\nSoma total dos salarios do departamento B: R$%.2f\n", somaB);
			
			for(i=0; i < qnt_func; i++){
				if((dpt[i] =='B' || dpt[i]=='b') && salario[i] > media_geral){
					
					
					printf("\nFuncionario %d - Idade: %d, Salario: R$ %.2f\n", i+1, idade[i], salario[i]);
				}
			}
			
			for(i=0; i < qnt_func; i++){
				if(i==0){
					maior_salario = salario[0];
					pos_maior = 0;
				} else {
					if(salario[i] > maior_salario){
						maior_salario = salario[i];
						pos_maior = i;
					}
				}
			}
			printf("\n====================================\n");
			
			printf("\nLISTA DE FUNCIONARIAS FEMININAS\n");
			
			printf("\n====================================\n");
			for(i=0; i < qnt_func; i++){
				if(sexo[i] == 'F' || sexo[i] == 'f'){
					printf("Funcionario: %d - Idade: %d, Salario: %.2f\n", i+1, idade[i], salario[i]);
				}
			}
			
			printf("\n====================================\n");
			
			printf("\nLISTA DE FUNCIONARIOS MASCULINOS\n");
			
			printf("\n====================================\n");
			for(i=0; i < qnt_func; i++){
				if(sexo[i] == 'M' || sexo[i] == 'm'){
					printf("Funcionario: %d - Idade: %d, Salario: %.2f\n", i+1, idade[i], salario[i]);
				}
			}
			
			printf("\n====================================\n");
			
			printf("\nLISTA DE FUNCIONARIOS NO DEPARTAMENTO A \n");
			
			printf("\n====================================\n");
			
			for(i=0; i < qnt_func; i++){
				if(dpt[i] == 'A'|| dpt[i] == 'a'){
					printf("Funcionario: %d - Idade: %d, Salario: %.2f \n", i+1, idade[i], salario[i]);
				}
			}
			
			printf("\n===========================================\n");
			
			printf("\nLISTA DE FUNCIONARIOS NO DEPARTAMENTO B \n");
			
			printf("\n===========================================\n");
			for(i=0; i < qnt_func; i++){
				if(dpt[i] == 'B'|| dpt[i] == 'b'){
					printf("Funcionario: %d - Idade: %d, Salario: %.2f \n", i+1, idade[i], salario[i]);
				}
			}
			
			for(i = 0; i < qnt_func; i++){
			    if(dpt[i] == 'A' || dpt[i] == 'a'){
			        if(enc_a == 0){
			            menor_salarioA = salario[i];
			            pos_menorA = i;
			            enc_a = 1;
			        } else if(salario[i] < menor_salarioA) {
			            menor_salarioA = salario[i];
			            pos_menorA = i;
			        }
			    }
			}
				
				if(enc_a == 1){
					printf("\n MENOR SALARIO DO DEPARTAMENTO A\n");
					printf("Funcionario: %d - Idade: %d, Sexo: %c, Salario: R$%.2f\n", pos_menorA + 1, idade[pos_menorA], sexo[pos_menorA], salario[pos_menorA]);
				}
			
			printf("\n====================================\n");
			
			printf("\nFUNCIONARIO COM MAIOR SALARIO\n");
			
			printf("\n====================================\n");
			printf("Departamento: %c \n", dpt[pos_maior]);
			printf("Sexo: %c \n", sexo[pos_maior]);
			printf("Idade: %d anos \n", idade[pos_maior]);
			printf("Salario R$: %.2f \n", salario[pos_maior]);
			
			return 0;
	}
