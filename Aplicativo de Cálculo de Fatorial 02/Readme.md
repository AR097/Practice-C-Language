# Aplicativo de Cálculo de Fatorial 02

Este é um programa simples em C que calcula o fatorial de um número inteiro não-negativo fornecido pelo usuário. O fatorial de um número \( n \) é o produto de todos os inteiros positivos menores ou iguais a \( n \). O programa lida com casos especiais, como números negativos e zero, e fornece uma saída detalhada do cálculo.

## Funcionalidades

- **Entrada de Usuário:** Solicita ao usuário que insira um valor inteiro para calcular o fatorial.
- **Validação de Entrada:** Verifica se o número fornecido é não-negativo. Caso contrário, informa que o fatorial de números negativos não pode ser calculado.
- **Cálculo do Fatorial:** Calcula o fatorial do número inserido utilizando um loop.
- **Saída Detalhada:** Exibe o processo de cálculo e o resultado final do fatorial.

## Como Usar

1. **Compilação:** Compile o código usando um compilador C. Por exemplo, com `gcc`:
   ```
   gcc -o fatorial fatorial.c
   ```
Aqui, fatorial.c é o nome do arquivo que contém o código e fatorial é o nome do executável gerado.

2. **Execução:** Execute o programa gerado:
  ```
  ./fatorial
  ```
3. **Entrada de Dados:** O programa solicitará que você digite um valor inteiro. Insira o valor desejado e pressione Enter.
4. **Saída:**  O programa calculará o fatorial e exibirá o processo detalhado junto com o resultado final.

## Exemplo
Se o usuário inserir o valor 5, a saída será:
  `Digite um valor para A: 5`
  `5 x 4 x 3 x 2 x 1 = 120`
  
*Observações*

Fatorial de Zero: O fatorial de 0 é definido como 1.
Números Negativos: O programa não pode calcular o fatorial de números negativos e exibe uma mensagem apropriada.

# Código comentado
```
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída, necessária para usar printf e scanf.

int fat = 1, A, n; // Declara três variáveis globais: 'fat' para armazenar o valor do fatorial, 'A' para o valor fornecido pelo usuário, e 'n' para iteração no loop.

int main() // Início da função principal onde a execução do programa começa.
{
    printf("Digite um valor para A: "); // Imprime uma mensagem solicitando ao usuário que insira um valor para A.
    scanf("%d", &A); // Lê um valor inteiro fornecido pelo usuário e armazena na variável A.

    if (A < 0) { // Verifica se o valor de A é negativo.
        printf("Não é possível calcular o fatorial de um número negativo.\n"); // Se A for negativo, imprime uma mensagem informando que o fatorial não pode ser calculado para números negativos.
        return 1; // Retorna 1 para indicar que ocorreu um erro e termina a execução do programa.
    }

    // Caso especial para 0, cujo fatorial é 1
    if (A == 0) { // Verifica se o valor de A é 0.
        printf("0! = 1\n"); // Se A for 0, imprime que o fatorial de 0 é 1.
        return 0; // Retorna 0 para indicar que o programa terminou sua execução com sucesso.
    }

    for (n = A; n > 1; n--) { // Inicia um loop que começa em A e decrementa até 2 (inclusive). Esse loop será usado para calcular o fatorial de A.
        printf("%d x ", n); // Imprime o valor atual de n seguido de " x ", para mostrar a multiplicação em andamento.
        fat = fat * n; // Multiplica o valor atual de 'fat' pelo valor de n e armazena o resultado em 'fat'.
    }

    // Imprime o último número e o resultado
    printf("%d = %d\n", n, fat); // Após o loop, imprime o último valor de n (que será 1) e o resultado final do fatorial.

    return 0; // Retorna 0 para indicar que o programa terminou sua execução com sucesso.
}
```
