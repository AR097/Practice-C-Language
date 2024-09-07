#include <stdio.h>

//fun��o para trocar os valores de tr�s vari�veis usando ponteiros
void troca(int *a, int *b, int *c){ //void � um tipo de retorno que indica que uma fun��o n�o retorna nenhum valor, ao declarar uma fun��o como void, estamos dizendo que a fun��o realiza uma tarefa, mas n�o fornece um resultdo.
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main(){
	int x=10, y=20, z=15;
	printf("Antes da troca: x = %d, y = %d, z = %d \n", x, y, z); //O %d � usado para imprimir valores inteiros \n � usado para nova linha.
	troca(&x, &y, &z);
	printf("Depois da troca: x= %d, y = %d, z = %d \n", x, y, z); //Estes s�o os argumentos que ser�o inseridos nos locais onde %d aparece na string de formato. O valor de x substituir� o primeiro %d e o valor de y substituir� o segundo %d.
	
	return 0;
}
