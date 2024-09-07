#include <stdio.h>

//inclur função para contar ocorrencias
int contarOcorrencias(char *str, char c){
	int count = 0;
	while (*str) {
		if (*str == c) {
			count++;
		}
		str++;
	}
	return count;
}

int main(){
	char texto[] = "O passaro voa alto";
	char caractere = 'o';
	printf("O caractere '%c' aparece %d vezes. \n", caractere, contarOcorrencias(texto, caractere));
	return 0;
}
