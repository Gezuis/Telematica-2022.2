/*Este é um programa de adivinhação*/
#include<stdio.h>
#include <stdlib.h>
//#define NUMERO_DE_TENTATIVAS 3
int main()
{
   int chute;
   int numeromagico;
   numeromagico=9;
   
   printf("\n####################################");
   printf("\n# Bem-vindo ao jogo da adivinhação #");
   printf("\n####################################");
    printf("\nAdivinhe o número entre 0 & 10: ");
    for (int i=1; i<=3; i++) {
    printf("\n Qual é o seu chute? ");
    scanf("%d", &chute);
    if(chute==numeromagico){
    printf("Parabéns você acertou!");
    break;
    }
    if(chute>numeromagico){
    printf("O valor digitado é maior");
    }
    else printf("O valor digitado é menor");

}
}
