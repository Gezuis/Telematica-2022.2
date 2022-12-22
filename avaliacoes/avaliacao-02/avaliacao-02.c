/*
# Telematica-2022.2 (21/09/2022)
Evoluindo na programação
DEPARTAMENTO DE TELEMÁTICA  
CURSO TELEMÁTICA / DISCIPLINA: LÓGICA E LINGUAGEM DE PROGRAMAÇÃO  TEMA: ESTRUTURAS DE REPETIÇÃO / LISTA DE EXERCICIOS 
 Jesus Edneudo Bessa da Rocha  
1ª QUESTÃO: As estruturas de repetição na linguagem C, também chamadas de laço permitem  executar comandos que se repetem sob uma determinada condição. São três comandos de  repetição: for, while e do while. Responda:  
a) Qual a diferença entre o while e o do .. while; While - se repete quando a condição é verdadeira,  quando for falsa, pula a linha do laço. Do while – se repete até que a condição seja falsa. b) No comando for há três expressões que definem como o laço executa. São: a inicialização da  
variável de controle, o teste realizado com a variável de controle e alteração que é feita na  variável de controle. Escreva um programa em C onde é mostrado os valores de inteiros pares  e múltiplos de 5. 
*/

#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
int main(){
int contador;
for( contador = 5; contador < 51; contador += 5 )
printf( "contador = %d\n", contador );
printf("ACABOU !!!!\n");
system("title Numeros impares multiplos de 5");
system(" start chrome.exe https://github.com/Gezuis/Telematica-2022.2/blob/main/%C3%8Dmpares.cpp");

}
