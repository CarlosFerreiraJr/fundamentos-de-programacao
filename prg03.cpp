#include <stdio.h>
 
int main() {
 
   double pi=3.14159;
   double a, r;
   
   printf("Informe o valor do raio:");
   scanf("%lf", &r);
   
   a = pi * (r * r);
   
   printf("A = %.4f\n", a);
 
    return 0;
}