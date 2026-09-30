#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
   int distancia, tempo;
   
   printf("Informe a distância em km:");
   scanf("%d", &distancia);
   
   tempo = distancia * 2;
   
   printf("Tempo de viagem: %d minutos\n", tempo);
 
    return 0;
}