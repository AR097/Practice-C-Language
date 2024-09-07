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
