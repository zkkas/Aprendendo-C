#include <stdio.h> //inclui a biblioteca stdio.h, que permite usar as funcoes de erada e saida, como printf e scanfnt

int main() {
   int idade = 0; //declara a variavel idade do tipo inteiro e inicializa com o valor 0
   char nome[50] = "teste"; //declara a variavel nome do tipo char (caractere) com um array de 50 caracteres e inicializa com a string "teste"
   printf("A idade inicial e %d e o nome inicial e %s \n", idade, nome); //imprime a idade e o nome iniciais usando printf, onde %d é um placeholder para um inteiro e %s é um placeholder para uma string
   printf("Insira uma idade: "); //imprime a mensagem "Insira uma idade: " para solicitar ao usuario que insira uma idade
   scanf("%d", &idade); //lê um inteiro do teclado e armazena na variavel idade usando scanf, onde %d é um placeholder para um inteiro e &idade é o endereço da variavel idade
   printf("insira um nome: "); //imprime a mensagem "insira um nome: " para solicitar ao usuario que insira um nome
   scanf("%s", &nome); //lê uma string do teclado e armazena na variavel nome usando scanf, onde %s é um placeholder para uma string e &nome é o endereço da variavel nome
   printf("A idade e %d e o nome e %s ", idade, nome); //imprime a idade e o nome inseridos pelo usuario usando printf, onde %d é um placeholder para um inteiro e %s é um placeholder para uma string
   
}