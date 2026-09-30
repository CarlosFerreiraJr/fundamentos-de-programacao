#include <stdio.h>
#include <windows.h>
#include <math.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
   double x1, y1, x2, y2, distancia;
   
   printf("Informe as coordenadas do primeiro ponto (x1 y1): ");
   scanf("%lf %lf", &x1, &y1);
    printf("Informe as coordenadas do segundo ponto (x2 y2): ");
   scanf("%lf %lf", &x2, &y2);
   
   distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   
   printf("Distância entre os pontos: %.4f\n", distancia);
 
    return 0;
}