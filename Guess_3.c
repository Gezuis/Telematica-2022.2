/*Este � um programa de adivinha��o*/
#include<stdio.h>
#include <stdlib.h>
//#define NUMERO_DE_TENTATIVAS 3
int main()
{
   int chute;
   int numeromagico;
   numeromagico=9;
   
   printf("\n####################################");
   printf("\n# Bem-vindo ao jogo da adivinha��o #");
   printf("\n####################################");
    printf("\nAdivinhe o n�mero entre 0 & 10: ");
    for (int i=1; i<=3; i++) {
    printf("\n Qual � o seu chute? ");
    scanf("%d", &chute);
    if(chute==numeromagico){
    printf("Parab�ns voc� acertou!");
    break;
    }
    if(chute>numeromagico){
    printf("O valor digitado � maior");
    }
    else printf("O valor digitado � menor");

}
}
