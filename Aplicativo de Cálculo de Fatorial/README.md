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
