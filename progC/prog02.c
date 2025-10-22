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

	return 0; 
}
