#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    int distancia;
    double gasolina_gasta;
    double consumo;
    
    printf("Informe a distância percorrida (km): ");
    scanf("%d", &distancia);
    printf("Informe a quantidade de gasolina gasta (litros): ");
    scanf("%lf", &gasolina_gasta);
    
    consumo = distancia / gasolina_gasta;
    
    printf("%.3f km/l\n", consumo);
 
    return 0;
}