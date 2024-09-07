#include <stdio.h>   // Biblioteca padrão (entrada e saída)
#include <stdlib.h>  // Biblioteca padrão (alocação de memória)

int main() {
    int numPessoas;  // Variável para armazenar o número de pessoas
    
    // Solicita ao usuário o número de pessoas
    printf("Digite o número de pessoas: ");
    scanf("%d", &numPessoas);  // Lê o número de pessoas inserido pelo usuário e armazena em numPessoas
    
    // Verifica se o número de pessoas é um valor válido
    if (numPessoas <= 0) {
        printf("Número de pessoas deve ser um valor maior que 1.\n");  // Mensagem de erro se o número de pessoas for inválido
        return 1;  // Encerra o programa com código de erro 1
    }
    
    // Aloca dinamicamente um array para armazenar as alturas das pessoas
    float *alturas = (float *)malloc(numPessoas * sizeof(float));  // malloc aloca memória suficiente para armazenar 'numPessoas' floats
    if (alturas == NULL) {  // Verifica se a alocação de memória foi bem-sucedida
        printf("Falha na alocação de memória.\n");  // Mensagem de erro se a alocação falhar
        return 1;  // Encerra o programa com código de erro 1
    }
    
    float altura, soma = 0;  // Variáveis para armazenar a altura atual e a soma das alturas
    float maiorAltura = -1, menorAltura = -1;  // Inicializa as variáveis para armazenar a maior e menor altura

    // Loop para ler a altura de cada pessoa e calcular a soma das alturas
    for (int i = 0; i < numPessoas; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);  // Solicita a altura da pessoa i+1
        scanf("%f", &altura);  // Lê a altura inserida pelo usuário e armazena em altura
        
        // Verifica se a altura é válida (positiva)
        if (altura <= 0) {
            printf("Altura deve ser um valor positivo.\n");  // Mensagem de erro se a altura for inválida
            free(alturas);  // Libera a memória alocada antes de encerrar o programa
            return 1;  // Encerra o programa com código de erro 1
        }
        
        alturas[i] = altura;  // Armazena a altura no array de alturas
        soma += altura;  // Adiciona a altura à soma total
        
        // Atualiza a maior altura, se necessário
        if (maiorAltura == -1 || altura > maiorAltura) {
            maiorAltura = altura;  // Atualiza maiorAltura com o valor da altura atual
        }
        // Atualiza a menor altura, se necessário
        if (menorAltura == -1 || altura < menorAltura) {
            menorAltura = altura;  // Atualiza menorAltura com o valor da altura atual
        }
    }
    
    // Calcula a média das alturas
    float mediaAltura = soma / numPessoas;  // Divide a soma das alturas pelo número de pessoas para obter a média
    
    // Exibe os resultados
    printf("Maior altura: %.2f metros\n", maiorAltura);  // Exibe a maior altura formatada com 2 casas decimais
    printf("Menor altura: %.2f metros\n", menorAltura);  // Exibe a menor altura formatada com 2 casas decimais
    printf("Média das alturas: %.2f metros\n", mediaAltura);  // Exibe a média das alturas formatada com 2 casas decimais
    
    // Libera a memória alocada
    free(alturas);  // Libera a memória que foi alocada para armazenar as alturas
    
    return 0;  // Encerra o programa com código de sucesso 0
}

