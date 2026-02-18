#include <stdio.h> //inclui a biblioteca de entrada e saida padrao, que permite usar as funcoes printf e scanf
#include <stdlib.h> //inclui a biblioteca stdlib.h, que permite usar a funcao system para pausar o programa

int main(){//funcao principal do programa, onde a execucao comeca
    printf("Hello World\n");//imprime a mensagem "Hello World" seguida de uma nova linha usando a funcao printf
    system("pause");//chama a funcao system com o argumento "pause" para pausar a execucao do programa e esperar que o usuario pressione uma tecla antes de continuar
    return 0;
}