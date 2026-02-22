#include <stdio.h>

int main (){
	int base;
	int altura;
	int area;

	printf("Digite O valor da base: ");
	scanf("%i", &base);
	
	printf("Digite a sua altura: ");
	scanf("%d", &altura);
	
	area = altura * base;
	printf("a area do retangulo e: %i", area);
}