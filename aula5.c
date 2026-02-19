#include <stdio.h>

int main() {
    int minhaidade = 20; //declara a variavel minhaidade do tipo inteiro e inicializa com o valor 20
    int idadedopai = 40; //declara a variavel idadedopai do tipo inteiro e inicializa com o valor 40
    int idadedamae = 41; //declara a variavel idadedamae do tipo inteiro e inicializa com o valor 41
    int idadetotal; //  declara a variavel idadetotal do tipo inteiro, que sera usada para armazenar a soma das idades
    idadetotal = minhaidade +idadedopai + idadedamae; //declara a variavel idadetotal do tipo inteiro e inicializa com a soma das idades usando o operador de adicao +
    printf("O total das idades e: %i", idadetotal); //imprime as idades usando a funcao printf, onde %i é um placeholder para um inteiro e minhaidade, idadedopai e idadedamae sao as variaveis que armazenam as idades
}