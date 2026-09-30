#include <stdio.h>
#include <windows.h>
 
int main() {
 
    // Configura entrada e saída do console para UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
  int duracao;
  int horas, minutos, segundos;

  printf("Informe a duração do evento em segundos:");
  scanf("%d", &duracao);
 
  horas = duracao / 3600;
  minutos = (duracao % 3600) / 60;
  segundos = duracao % 60;

  printf("O evento durou %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
  return 0;
}