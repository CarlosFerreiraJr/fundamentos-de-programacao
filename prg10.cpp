#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    char nome[80];
    double salario_fixo;
    double total_vendido;
    double salario_final;
    
    printf("Informe o nome do vendedor:");
    scanf("%s", &nome);
    printf("Informe o salário fixo:");
    scanf("%lf", &salario_fixo);
    printf("Informe o total vendido:");
    scanf("%lf", &total_vendido);
    
    salario_final = salario_fixo + (total_vendido * 0.15);
    
    printf("TOTAL = R$ %.2f\n", salario_final);
 
    return 0;
}