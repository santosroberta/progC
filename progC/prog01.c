#include<stdio.h>

/*lista 1*/
int somaDiv(int num) {
	/*q2*/
	int cont = 0;
	for (int i = 0;i <= num; i++) {
		if (num % i == 0) {
			cont += i;
		}
	}
	return cont;
}
int main(void) {
	/*q1*/
	int matric;
	printf("Digite a matricula: ");
	scanf("%d", &matric);
	printf("Ano: %d \nSemestre: %d \nColocacao: %d\n", matric/ 10000,(matric % 10000)/1000,matric % 1000);
	/*q2*/

	
	/*q3*/
	float L, totL = 0, km, totKm = 0;
	printf("Entre com a quantidade de litros que abasteceu (ou -1 para terminar): ");
	scanf("%f", &L);
	while(L!=-1){
		printf("Entre com a qntd de km rodados: ");
		scanf("%f", &km);
		printf("Consumo atual eh de: %f\n", km / L);
		totKm += km;
		totL += L;
		printf("Entre com a quantidade de litros que abasteceu (ou -1 para terminar): ");
		scanf("%f", &L);
	}

	if (L == -1) {
		printf("O consumo total foi de: %f\n", totKm / totL);
	}
	/*q4*/
	int cod, qntd;
	float tot = 0.0, preco = 0.0;
	printf("Qual o codigo do produto: ");
	scanf("%d", &cod);
	while (cod >= 1 && cod <= 5) {
		printf("Quantidade vendida de produtos: ");
		scanf("%d", &qntd);
		switch (cod) {
		case 1:
			preco = 2.98;
			break;
		case 2:
			preco = 4.50;
			break;
		case 3:
			preco = 9.98;
			break;
		case 4:
			preco = 4.49;
			break;
		default:
			preco = 6.87;
			break;
		}
		tot += preco * qntd;
		printf("Qual o codigo do produto: ");
		scanf("%d", &cod);
		
	}
	printf("O valor total foi de R$ %.2f\n", tot);
	/*q5*/
	return 0;
}
