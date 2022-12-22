#include <stdio.h>


// Função myFunction
// Tipo - void
// Nome - myFunction
// Parametro - char name[]  
// name é um parametro

int meuTamanho(char frase[]) {
 int tam = 0;
 int i;
 for(i=17; frase[i]; i--) {
 printf("%d %c\n", i, frase [i]);
 }
 
 tam=i;
 return tam;
}

int main() {

  int size;
 
  char s1 []= "Jose Maria e Jesus";
 
  size=meuTamanho(s1);
  printf("O Tamanho da String=%d\n", size);
 
  return 0;
}
