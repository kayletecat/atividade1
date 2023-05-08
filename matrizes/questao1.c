#include <stdio.h>

int main() {
    float numero, dobro;
    
    printf("Digite um número: ");
    scanf("%f", &numero); // Lê um número fornecido pelo usuário
    
    dobro = numero * 2; // Calcula o dobro do número
    
    printf("O dobro de %.2f é %.2f", numero, dobro); // Exibe o resultado
    
    return 0;
}