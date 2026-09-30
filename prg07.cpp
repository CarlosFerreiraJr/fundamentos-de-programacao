#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    double a, b, c;
    double media;
    

    printf("Informe o primeiro número:");
    scanf("%lf", &a);
    printf("Informe o segundo número:");
    scanf("%lf", &b);
    printf("Informe o terceiro número:");
    scanf("%lf", &c);
    
    media = ( (a * 2) + (b * 3) + (c*5) ) / 10;
    
    printf("MEDIA = %.1f\n", media);
 
    return 0;
}