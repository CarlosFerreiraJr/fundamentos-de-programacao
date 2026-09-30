#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
   double n1, n2, media;
   
   printf("Informe o primeiro número:");
   scanf("%lf", &n1);
   printf("Informe o segundo número:");
   scanf("%lf", &n2);
    
   media = (n1 * 3.5 + n2 * 7.5) / 11;
   
   printf("MEDIA = %.5f\n", media);
 
   return 0;
}