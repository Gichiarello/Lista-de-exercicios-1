/*Giovanni Chiarello 31/05
Finalidade: achar o maior numero entre 3 inteiros inseridos
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int posicao;
    //entradas: os 3 numeros a ser lidos

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro número: ");
    scanf("%d", &num3);
    
    //processamento: verifica entre os 3 qual o maior
    if (num1 >= num2 && num1 >= num3) {
        posicao = 1;
    } else if (num2 >= num1 && num2 >= num3) {
        posicao = 2;
    } else {
        posicao = 3;
    }

    printf("\n\nO maior número está na posição: %d\n", posicao); //saida: Mostra qual e onde esta o maior numero dentre os 3

    return 0;
}

