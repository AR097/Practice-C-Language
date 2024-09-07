#include <stdio.h>

int fat = 1, A, n;

int main()
{
    printf("Digite um valor para A: "); // entrada do usu�rio
    scanf("%d", &A);

    if (A < 0) {
        printf("N�o � poss�vel calcular o fatorial de um n�mero negativo.\n"); //Retorno para valores abaixo de 0
        return 1;
    }

    // Caso especial para 0, que tem como fatorial = 1
    if (A == 0) {
        printf("0! = 1\n");
        return 0;
    }

    for (n = A; n > 1; n--) {//Retorno para valores maior de 0
        printf("%d x ", n);
        fat = fat * n;
    }

    // Imprime o �ltimo n�mero e o resultado
    printf("%d = %d\n", n, fat);

    return 0;
}

