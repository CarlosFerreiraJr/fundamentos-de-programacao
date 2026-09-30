#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    int number;
    int hour;
    double amount, salary;
    
    printf("Informe o número do funcionário:");
    scanf("%d", &number);
    printf("Informe o número de horas trabalhadas:");
    scanf("%d", &hour);
    printf("Informe o valor que recebe por hora:");
    scanf("%lf", &amount);
    
    salary = hour * amount;
    
    printf("Número do funcionário = %d\n", number);
    printf("SALÁRIO = U$ %.2f\n", salary);
    return 0;
}