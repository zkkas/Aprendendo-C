#include <stdio.h> //inclui a biblioteca stdio.h, que permite usar as funcoes de erada e saida, como printf e scanfnt
#include <stdint.h> //inclui a biblioteca stdint.h, que define tipos de dados inteiros com tamanhos especificos, como int32_t e uint8_t

const char texto[] = "bote a sua altura: ";
int idade = 0; //declara a variavel idade do tipo inteiro e inicializa com o valor 20

int main () {
    printf ("%s\n", texto); //imprime a string armazenada na variavel texto seguida de uma nova linha usando a funcao printf, onde %s é um placeholder para uma string
    float altura = 0.0; //declara a variavel altura do tipo float e inicializa com o valor 0.0
    scanf ("%f", &altura);
    printf ("Qual a sua idade? \n"); //imprime a mensagem "Qual a sua idade? " seguida de uma nova linha usando a funcao printf
    scanf ("%d", &idade); //lê um inteiro do teclado e armazena na variavel idade usando scanf, onde %d é um placeholder para um inteiro e &idade é
    printf ("a sua altura e %.2f e voce tem %d anos", altura, idade); //imprime a altura inserida pelo usuario usando printf, onde %.2f é um placeholder para um numero de ponto flutuante com 2 casas decimais e &altura e o endereco da variavel altura
}