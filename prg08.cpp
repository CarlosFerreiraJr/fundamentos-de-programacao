#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    int a, b, c, d, dif;
    
    printf("Informe o primeiro número:");
    scanf("%d", &a);
    printf("Informe o segundo número:");
    scanf("%d", &b);
    printf("Informe o terceiro número:");
    scanf("%d", &c);
    printf("Informe o quarto número:");
    scanf("%d", &d);
    
    dif = ( (a * b) - (c * d)  );
    
    printf("DIFERENCA = %d\n", dif);
 
    return 0;
}