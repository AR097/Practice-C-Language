#include <stdio.h>

void inverterArray(int *arr, int tamanho) {
	int *inicio = arr;
	int *fim = arr + tamanho -1;
	while (inicio < fim) {
		int temp = *inicio;
		*inicio = *fim;
		*fim = temp;
		inicio++;
		fim--;
	}
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int tamanho = sizeof(arr) / sizeof(arr[0]);
	
	printf("Array original: ");
		for (int i = 0; i < tamanho; i++) {
			printf("%d", arr[i]);
		}
	
	printf("\n");
	
	inverterArray(arr, tamanho);
	
	printf("Array invertido: ");
	for (int i = 0; i < tamanho; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	
	return 0;
	
}
