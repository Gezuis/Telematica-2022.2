// Telematica-2022.2
// Evoluindo na programação

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 2
#include <Windows.h>
	system ("title insetos");

typedef struct aluno{
	char nome[30];
	float nota1, nota2;
	struct aluno*prox;
}ALUNOPTR;

ALUNOPTR *getnodo()
{
    ALUNOPTR *p;
    p=(ALUNOPTR*)malloc(sizeof(struct aluno));
    return (p);
}


ALUNOPTR *insere(ALUNOPTR *p, char x)
{
   ALUNOPTR *q,*ant,*prim;
   prim=p;
   q=getnodo();
   q->nome[30]=x;
   if(q->nome<p->nome)
   { 
      q->prox=p;
   	  p=q;
   	  return p;
   }
   while((p!=NULL)&&(q->nome>=p->nome))
   {
   	   ant=p;
	   p=p->prox;	  
   }
   // se antes do final, o valor for menor, insere neste local
   if((p!=NULL)&&(q->nome<p->nome))
    {
       p=ant;
	   q->prox=p->prox;
	   p->prox=q;
	   return prim;	
	}
   if((p==NULL)&&(q->nome>=ant->nome))
    //se chegar no final e o valor a inserir ainda for maior do que o último, insere o último
    {
       q->prox=p;	
	   p=ant;
       p->prox=q;
       return prim;
    }    	
}
