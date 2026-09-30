#include <stdio.h>
 
int main() {
 
    int valor;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    
    printf("Informe o valor a ser sacado:");
    scanf("%d", &valor);
    
    nota100 = valor / 100;
    nota50 = (valor - (100*nota100))/50;
    nota20 = (valor - ((100*nota100) + (50*nota50)))/20;
    nota10 = (valor - ((100*nota100) + (50*nota50) + (20*nota20)))/10;
    nota5 = (valor - ((100*nota100) + (50*nota50) + (20*nota20) + (10*nota10)))/5;
    nota2 = (valor - ((100*nota100) + (50*nota50) + (20*nota20) + (10*nota10) + (5*nota5)))/2;
    nota1 = (valor - ((100*nota100) + (50*nota50) + (20*nota20) + (10*nota10) + (5*nota5) + (2*nota2)));
    
    printf("Valor sacado: %d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);
 
    return 0;
}