# Aplicativo de Cálculo de Fatorial

Este projeto é um aplicativo simples desenvolvido em C que recebe um número inteiro positivo como entrada e retorna o fatorial desse número, junto com a sequência de multiplicações que compõem o fatorial. Se o número fornecido for menor que 0, o aplicativo exibe uma mensagem informando que o cálculo do fatorial para números negativos não é possível.

## Funcionamento do Programa

1. **Entrada de Dados**: O programa solicita ao usuário que insira um número inteiro. Este número será o valor inicial \( A \) que terá seu fatorial calculado.
   
2. **Verificação de Valor Negativo**: Caso o número inserido seja negativo, o programa interrompe a execução e exibe a mensagem: "Não é possível calcular o fatorial de um número negativo."

3. **Cálculo do Fatorial**: Para números iguais ou maiores que zero, o programa imprime a sequência de multiplicações que formam o fatorial e, ao final, o resultado do fatorial de \( A \).

      Por exemplo, para \( A = 5 \), a saída será:
      
      `5! = 5 X 4 X 3 X 2 X 1 = 120`

4. **Saída**:

   `O resultado final será o valor do fatorial do número inserido.`
   
## Exemplo de Uso

Entrada do usuário:

   `Digite um valor para A: 5`

Saída: 

   `5! = 5 X 4 X 3 X 2 X 1 = 120`

Se o número inserido for negativo:
Digite um valor para A: -3 
   
   `Não é possível calcular o fatorial de um número negativo.`


## Como Compilar e Executar

Para compilar e executar este programa, siga os passos abaixo:

1. Compile o código usando um compilador C:
   ```bash
   gcc fatorial.c -o fatorial
   ```
2. Execute o programa
   ```bash
   ./fatorial
   ```
   
## Tecnologias Utilizadas

Linguagem de Programação C

Entrada e saída de dados via console

```
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída --> necessária para usar printf e scanf.

int main() { // Início da função principal onde a execução do programa começa.
    int A, fatorial = 1; // Declara duas variáveis inteiras. 'A' será usada para armazenar o valor fornecido pelo usuário e 'fatorial' é inicializado como 1, que será usado para calcular o fatorial.

    printf("Digite um valor para A: "); // Imprime uma mensagem solicitando ao usuário que digite um valor para A.
    scanf("%d", &A); // Lê um valor inteiro fornecido pelo usuário e armazena na variável A.

    if (A < 0) { // Verifica se o valor de A é negativo.
        printf("Não é possivel calcular um fatorial de um número negativo. \n"); // Se A for negativo, imprime uma mensagem informando que o fatorial não pode ser calculado para números negativos.
        return 1; // Retorna 1 para indicar que ocorreu um erro e termina a execução do programa.
    }

    printf("%d! = ", A); // Imprime o valor de A seguido de "!" e um sinal de igual para mostrar que o cálculo do fatorial vai começar.
    for (int i = A; i > 0; i--) { // Inicia um laço que começa em A e decrementa até 1. Esse laço será responsável por calcular o fatorial de A.
        fatorial *= i; // Multiplica o valor atual de fatorial pelo valor de i e armazena o resultado em fatorial.
        printf("%d", i); // Imprime o valor atual de i.
        if (i > 1){ // Se i é maior que 1, significa que ainda não chegamos ao final da multiplicação.
            printf(" X "); // Imprime o símbolo de multiplicação " X " para mostrar a operação de fatorial em andamento.
        }
    }
    printf(" = %d\n", fatorial); // Depois do loop, imprime o resultado final do fatorial, com o valor calculado.

    return 0; // Retorna 0 para indicar que o programa terminou sua execução com sucesso.
}
```

# Codigo:
```
#include <stdio.h>

int main() {
	int A, fatorial = 1;
	
	printf("Digite um valor para A: ");
	scanf("%d", &A);
	
	if (A < 0) {
		printf("Não é possivel calcular um fatorial de um número negativo. \n");
		return 1;
	}
	
	printf("%d! = ", A);
	for (int i = A; i > 0; i--) {
		fatorial *= i;
		printf("%d", i);
		if (i > 1){
			printf(" X ");
		}
	}
	printf(" = %d\n", fatorial);
	
	return  0;
}
```
