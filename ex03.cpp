//Desenvolva um programa que solicite ao usu�rio quantos n�meros ele deseja inserir
//e, em seguida, calcule e exiba a m�dia desses n�meros.

#include<stdio.h>


	int main(){
		int quantv, num, qtd = 1;
		int i = 0;
		float media, soma;
		
		printf("Quantidade de vezes: ");
		scanf("%d", &quantv);
		
		while(quantv >= 1 ){
			quantv;
			printf("Numero: ");
			scanf("%f", &num);
			soma = num + soma;
			printf("A soma: %.2f", soma);
			
		
;
			
		} media = soma / qtd;
		
		printf("A media eh: %.2f", media);
	}

