#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    int tempo, velocidade_media;
    double litros_gastos;
    
    printf("Informe o tempo gasto na viagem (em horas):");
    scanf("%d", &tempo);
    printf("Informe a velocidade média durante a viagem (em km/h):");
    scanf("%d", &velocidade_media);
    
    litros_gastos = (tempo * velocidade_media)/12.0;
    
    printf("Quantidade de litros gastos na viagem: %.3f\n", litros_gastos);
 
    return 0;
}