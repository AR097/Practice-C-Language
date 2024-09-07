#include <stdio.h>

// Fun��o para trocar os valores de duas vari�veis usando ponteiros
void troca(int *a, int *b) {
    int temp = *a; // Armazena o valor de 'a' em 'temp'
    *a = *b;      // Atribui o valor de 'b' para 'a'
    *b = temp;    // Atribui o valor de 'temp' para 'b'
}

int main() {
    int x = 10, y = 20; // Declara e inicializa duas vari�veis inteiras
    printf("Antes da troca: x = %d, y = %d\n", x, y); // Exibe os valores iniciais de x e y
    troca(&x, &y); // Chama a fun��o troca passando os endere�os de x e y
    printf("Depois da troca: x = %d, y = %d\n", x, y); // Exibe os valores de x e y ap�s a troca
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

