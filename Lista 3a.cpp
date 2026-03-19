#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	// exercicio 1
	printf("Ex 1 - Media ponderada - nota\n");
	float nota1, nota2, nota3, med;
	printf("Digite sua nota p1:");
	scanf("%f", &nota1);
	printf("Digite sua nota p2:");
	scanf("%f", &nota2);
	fflush(stdin);
	printf("Digite sua nota p3:");
	scanf("%f", &nota3);
	
	med = ((nota1*1)+(nota2*2)+(nota3*3))/5;
	
	if(med>=7){
		printf("Aprovado\n\n");
	}
		else if(med<7 && med>=5){
			printf("Recuperacao\n\n");
		}
			else {
				printf("Reprovado\n\n");
			}
	
	// exercicio 2
	printf("Ex 2 - Faixa etaria\n");
	int idade;
	printf("Digite sua idade:");
	scanf("%i", &idade);
	
	if(idade>=0 && idade<=12)
		printf("Crianca\n\n");
		else if(idade>=13 && idade<=17)
		printf("Adolescente\n\n");
			else if(idade>=18 && idade<=59)
			printf("Adulto\n\n");
				else if(idade>=60)
				printf("Idoso\n\n");
					else 
					printf("Idade invalida\n");
					
	// exercicio 3
	printf("Ex 3 - Desconto\n");
	float preco;
	printf("Digite o preco:");
	scanf("%f", &preco);
	fflush(stdin);
	
	if(preco<=100 && preco>0){
		printf("Sera aplicado um desconto de 5%%, e com isso o resultado final sera de: %.2f\n\n", preco*0.95);
	}
		else if(preco>100 && preco<=500){
			printf("Sera aplicado um desconto de 10%%, e com isso o resultado final sera de: %.2f\n\n", preco*0.90);
		}
			else if(preco>500){
				printf("Sera aplicado um desconto de 15%%, e com isso o resultado final sera de: %.2f\n\n", preco*0.85);
			}
				else{
				printf("Preco inavlido\n\n");
				}
				
	// exercicio 4 
	printf("Ex 4 - Multiplo de 3, de 5 ou de ambos\n");
	int num;
	printf("Digite um numero inteiro:");
	scanf("%i", &num);
	
	if(num%3==0 && num%5==0){
		printf("Esse numero e multiplo de 3 e de 5\n\n");
	}
		else if(num%3==0 && num%5!=0){
			printf("Esse numero e multiplo de 3\n\n");
		}
			else if(num%3!=0 && num%5==0){
				printf("Esse numero e multiplo de 5\n\n");
			}
				else{
					printf("Esse numero nao e multiplo de 3 e nem de 5\n\n");
				}
				
	// exercicio 5
	printf("Ex 5 - Dias da semana\n");
	int dia;
	printf("Digite um dia da semana usando numeros de 1 a 7:\n");
	scanf("%i", &dia);
	fflush(stdin);
	
	switch(dia){
		case 1: printf("Domingo\n\n");
			break;
		case 2: printf("Segunda-feira\n\n");
			break;
		case 3: printf("Terca-feira\n\n");
			break;
		case 4: printf("Quarta-feira\n\n");
			break;
		case 5: printf("Quinta-feira\n\n");
			break;
		case 6: printf("Sexta-feira\n\n");
			break;
		case 7: printf("Sabado\n\n");
			break;
		default: printf("Dia invalido\n\n");
			break;
	}
	
	// exercicio 6
	printf("Ex 6 - Macas compradas\n");
	int macas;
	printf("Quantas macas foram compradas ?\n");
	scanf("%i", &macas);
	float total;
	
	if(macas<12 && macas>0){
		printf("Cada maca custara 1.30 reais, com isso o valor total sera de: %.2f reais", total=macas*1.30);
	}
		else if(macas>=12) {
			printf("Cada maca custara 1 real, com isso o valor total sera de: %i reais", macas);
		}
			else {
				printf("Valor invalido");
			}
		
	return 0;
}