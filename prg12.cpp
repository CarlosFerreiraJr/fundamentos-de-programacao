#include <stdio.h>
#include <math.h>
 
int main() {
 
    double pi = 3.14159;
    int r;
    double volume;
    
    printf("Informe o valor do raio da esfera:");
    scanf("%d", &r);
    
    volume = (4/3.0) * pi * pow(r,3);
    
    printf("VOLUME = %.3f\n", volume);
 
    return 0;
}