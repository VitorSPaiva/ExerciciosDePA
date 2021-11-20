#include <stdio.h>
/*
Um ponteiro para uma funcao eh uma forma de declaracao de variavel que faz com que a mesma
armazene o endereco do inicio do codigo executavel de uma funcao, que pode ser chamada
posteriormente atraves desse ponteiro. Outra caracteristica importante eh o fato de nao
ser necessario alocar e desalocar memoria para o seu uso.
*/  
  int
soma (int a, int b)
{
  return a + b;
}


int
multiplica (int a, int b)
{
  return a * b;
}


 
typedef int (*Operacao) (int, int);

 

  int
opera (int a, int b, Operacao op)
{
  
return op (a, b);

}


 
int
main ()
{
  
printf ("%d\n", opera (3, 4, soma));	
  printf ("%d\n", opera (3, 4, multiplica));	
} 
 
 
