#include <stdio.h>

int main() {
    int num1, num2, num3;
    int posicao;
    //entradas: os 3 numeros a ser lidos

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro n�mero: ");
    scanf("%d", &num3);
    
    //processamento: verifica entre os 3 qual o maior
    if (num1 >= num2 && num1 >= num3) {
        posicao = 1;
    } else if (num2 >= num1 && num2 >= num3) {
        posicao = 2;
    } else {
        posicao = 3;
    }

    printf("\n\nO maior n�mero est� na posi��o: %d\n", posicao); //saida: Mostra qual e onde esta o maior numero dentre os 3

    return 0;
}

