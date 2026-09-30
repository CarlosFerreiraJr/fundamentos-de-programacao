#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    int cod_prod01, cod_prod02;
    int unidade_prod01, unidade_prod02;
    double preco_por_unidade01, preco_por_unidade02;
    double valor_a_pagar;
    
    printf("Informe o código, quantidade e preço do primeiro produto:");    
    scanf("%d %d %lf", &cod_prod01,
                       &unidade_prod01,
                       &preco_por_unidade01);

    printf("Informe o código, quantidade e preço do segundo produto:"); 
    scanf("%d %d %lf", &cod_prod02,
                       &unidade_prod02,
                       &preco_por_unidade02);
 
     valor_a_pagar = (unidade_prod01 * preco_por_unidade01) + (unidade_prod02 * preco_por_unidade02);
   
    printf("VALOR A PAGAR: R$ %.2f\n", valor_a_pagar);
   
    return 0;
}