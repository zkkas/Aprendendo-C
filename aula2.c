#include <stdio.h> //inclui a biblioteca stdio.h, que permite usar as funcoes de erada e saida, como printf e scanfnt

int main() {
   int idade = 0; //variavel do tipo inteiro, com o nome idade, e valor inicial 0
   printf("A idade inicial e %d \n", idade); //imprime a idade inicial, que e 0
   printf("Informe uma idade: "); //imprime a mensagem "Informe uma idade: " para o usuario
   scanf("%d", &idade); //le a idade informada pelo usuario e armazena na variavel idade, usando o formato %d para inteiro e o operador & para passar o endereco da variavel
   printf("A idade informada foi %d \n", idade); //imprime a idade informada pelo usuario, usando o formato %d para inteiro e a variavel idade
}