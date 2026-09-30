#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
   int n1, n2, prod;
   
   printf("Informe o primeiro número:");
   scanf("%d", &n1);
   printf("Informe o segundo número:");
   scanf("%d", &n2);
    
    prod = n1 * n2;
    
    printf("PROD = %d\n", prod);
    
    return 0;
}