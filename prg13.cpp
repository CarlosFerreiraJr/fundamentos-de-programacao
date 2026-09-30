#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double A, B, C;
    double triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;

    // Lê os três valores
    printf("Informe os três valores (A, B, C): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calcula as áreas
    triangulo = (A * C) / 2.0;

    circulo = pi * C * C;

    trapezio = ((A + B) * C) / 2.0;

    quadrado = B * B;

    retangulo = A * B;

    // Exibe os resultados com 3 casas decimais
    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;
}