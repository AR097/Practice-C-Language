#include <stdio.h>   // Biblioteca padr�o (entrada e sa�da)
#include <stdlib.h>  // Biblioteca padr�o (aloca��o de mem�ria)

int main() {
    int numPessoas;  // Vari�vel para armazenar o n�mero de pessoas
    
    // Solicita ao usu�rio o n�mero de pessoas
    printf("Digite o n�mero de pessoas: ");
    scanf("%d", &numPessoas);  // L� o n�mero de pessoas inserido pelo usu�rio e armazena em numPessoas
    
    // Verifica se o n�mero de pessoas � um valor v�lido
    if (numPessoas <= 0) {
        printf("N�mero de pessoas deve ser um valor maior que 1.\n");  // Mensagem de erro se o n�mero de pessoas for inv�lido
        return 1;  // Encerra o programa com c�digo de erro 1
    }
    
    // Aloca dinamicamente um array para armazenar as alturas das pessoas
    float *alturas = (float *)malloc(numPessoas * sizeof(float));  // malloc aloca mem�ria suficiente para armazenar 'numPessoas' floats
    if (alturas == NULL) {  // Verifica se a aloca��o de mem�ria foi bem-sucedida
        printf("Falha na aloca��o de mem�ria.\n");  // Mensagem de erro se a aloca��o falhar
        return 1;  // Encerra o programa com c�digo de erro 1
    }
    
    float altura, soma = 0;  // Vari�veis para armazenar a altura atual e a soma das alturas
    float maiorAltura = -1, menorAltura = -1;  // Inicializa as vari�veis para armazenar a maior e menor altura

    // Loop para ler a altura de cada pessoa e calcular a soma das alturas
    for (int i = 0; i < numPessoas; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);  // Solicita a altura da pessoa i+1
        scanf("%f", &altura);  // L� a altura inserida pelo usu�rio e armazena em altura
        
        // Verifica se a altura � v�lida (positiva)
        if (altura <= 0) {
            printf("Altura deve ser um valor positivo.\n");  // Mensagem de erro se a altura for inv�lida
            free(alturas);  // Libera a mem�ria alocada antes de encerrar o programa
            return 1;  // Encerra o programa com c�digo de erro 1
        }
        
        alturas[i] = altura;  // Armazena a altura no array de alturas
        soma += altura;  // Adiciona a altura � soma total
        
        // Atualiza a maior altura, se necess�rio
        if (maiorAltura == -1 || altura > maiorAltura) {
            maiorAltura = altura;  // Atualiza maiorAltura com o valor da altura atual
        }
        // Atualiza a menor altura, se necess�rio
        if (menorAltura == -1 || altura < menorAltura) {
            menorAltura = altura;  // Atualiza menorAltura com o valor da altura atual
        }
    }
    
    // Calcula a m�dia das alturas
    float mediaAltura = soma / numPessoas;  // Divide a soma das alturas pelo n�mero de pessoas para obter a m�dia
    
    // Exibe os resultados
    printf("Maior altura: %.2f metros\n", maiorAltura);  // Exibe a maior altura formatada com 2 casas decimais
    printf("Menor altura: %.2f metros\n", menorAltura);  // Exibe a menor altura formatada com 2 casas decimais
    printf("M�dia das alturas: %.2f metros\n", mediaAltura);  // Exibe a m�dia das alturas formatada com 2 casas decimais
    
    // Libera a mem�ria alocada
    free(alturas);  // Libera a mem�ria que foi alocada para armazenar as alturas
    
    return 0;  // Encerra o programa com c�digo de sucesso 0
}

