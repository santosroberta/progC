#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
/*lista 2*/
int main(void) {
	/*q1- entrada e saida*/
	float celsius, fahrenheit;
	printf("Digite a temperatura em fahrenheit: ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("Celsius= %f\n", celsius);
	/*q2*/
	int cInicial=1000, meses=12;
	float cFinal, tJuros=0.025;
	cFinal = cInicial * (1 + tJuros) * meses;
	printf("O valor final apos %d meses eh de: %f\n", meses, cFinal);
	/*q3*/
	int lado = 6;
	float area, perimetro;
	perimetro = 3 * 6;
	area = (sqrt(3) / 4) * pow(lado, 2);
	printf("Area: %f\nPerimetro: %f\n", area, perimetro);
	/*q4*/
	int dTot, semanas, dias;
	printf("Digite o total de dias: ");
	scanf("%d", &dTot);
	semanas = dTot / 7;
	dias = dTot % 7;
	printf("Semanas: %d\nDias: %d\n", semanas, dias);
	/*q5*/
	float g1, g2, media;
	printf("Digite a primeira nota: ");
	scanf("%f", &g1);
	printf("Digite a segunda nota: ");
	scanf("%f", &g2);
	media = 2*g1+2*g2/ 5;
	printf("Media: %f\n", media);
	/*q6 - condicionais*/
	float nota;
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
	if (nota >= 9.0 && nota <= 10.0) {
		printf("Conceito A\n");
	}
	else if (nota >=8.0 && nota < 9.0) {
		printf("Conceito B\n");
	}
	else if (nota >= 7.0 && nota < 7.9) {
		printf("Conceito C\n");
	}
	else if (nota >= 5.0 && nota < 6.9) {
		printf("Conceito D\n");
	}else {
		printf("Conceito F\n");
	}
	/*q7*/
	int a, b, c;
	float x1, x2,delta;
	printf("Digite os valores de a, b e c: ");
	scanf("%d %d %d", &a, &b, &c);
	float delta = pow(b, 2) - 4 * a * c;
	if (delta < 0) {
		printf("Nao existem raizes reais\n");
	}
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Raizes: %f e %f\n", x1, x2);
	}
	/*q8*/
	/*q9*/
	int val1, val2, val3;
	printf("Digite tres valores inteiros: ");
	scanf("%d %d %d", &val1, &val2, &val3);
	if (val1 >= val2 && val1 >= val3) {
		printf("O maior valor eh: %d\n", val1);
	}
	else if (val2 >= val1 && val2 >= val3) {
		printf("O maior valor eh: %d\n", val2);
	}else if (val3 >= val1 && val3 >= val2) {
		printf("O maior valor eh: %d\n", val3);
	}
	else {
		printf("Todos os valores sao iguais: %d\n", val1);
	}
	/*q10*/
	int v1, v2, v3;
	printf("Digite tres valores inteiros: ");
	scanf("%d %d %d", &v1, &v2, &v3);
	/*q11*/
	float p1, p2, p3,media;
	printf("digite duas notas: ");
	scanf("%f %f", &p1, &p2);
	media = (p1 + p2) / 2;
	if (media> 5.0) {
		if (p1 > 3.0 && p2 > 3.0) {
			printf("Aprovado\n");
			printf("%f\n", media);
		}
	}
	else {
		printf("Ta de PF\n");
		printf("Digite a nota da p3: ");
		scanf("%f", &p3);
		if (p1 > p2) {
			media = (p1 + p3) / 2;
			if ((media >= 5.0) {
				printf("Aprovado com pf e pela p1\n");
				printf("%f\n", media);
			}
		}
		else if(p2 > p1){
			media = (p2 + p3) / 2;
			if (media>= 5.0) {
				printf("Aprovado com pf e pela p2\n");
				printf("%f\n", media);
			}

		}
		else {
			printf("Reprovado\n");
		}
	}

	return 0; 
}
