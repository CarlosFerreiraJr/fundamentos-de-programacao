#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int A, B, C;
    int maiorAB, maior;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &A, &B, &C);

    // Descobre o maior entre A e B
    maiorAB = (A + B + abs(A - B)) / 2;

    // Descobre o maior entre maiorAB e C
    maior = (maiorAB + C + abs(maiorAB - C)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}