#include <stdio.h>

//função para trocar os valores de três variáveis usando ponteiros
void troca(int *a, int *b, int *c){ //void é um tipo de retorno que indica que uma função não retorna nenhum valor, ao declarar uma função como void, estamos dizendo que a função realiza uma tarefa, mas não fornece um resultdo.
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main(){
	int x=10, y=20, z=15;
	printf("Antes da troca: x = %d, y = %d, z = %d \n", x, y, z); //O %d é usado para imprimir valores inteiros \n é usado para nova linha.
	troca(&x, &y, &z);
	printf("Depois da troca: x= %d, y = %d, z = %d \n", x, y, z); //Estes são os argumentos que serão inseridos nos locais onde %d aparece na string de formato. O valor de x substituirá o primeiro %d e o valor de y substituirá o segundo %d.
	
	return 0;
}
