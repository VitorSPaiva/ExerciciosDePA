#include <stdio.h>
#include<stdlib.h>

 void 
somaVet (int a[], int b[], int soma[], int n) 
{
  
 
int i;
  
 
for (i = 0; i < n; i++)
    
    {
      
 
soma[i] = a[i] + b[i];
    
 
}

 
}


 
 
 
int 
main (void) 
{
  
 
int n;
  
 
printf ("Insira a quantidade de termos dos vetores:\n");
  
 
scanf ("%d", &n);
  
 
printf ("\n");
  
 
int *a;
  
 
int *b;
  
 
int *soma;
  
 
a = (int *) malloc (n * sizeof (int));
  
 
b = (int *) malloc (n * sizeof (int));
  
 
soma = (int *) malloc (n * sizeof (int));
  
 
printf ("Insira os valores do primeiro vetor:\n");
  
 
int i;
  
 
for (i = 0; i < n; i++)
    
    {
      
 
 
scanf ("%d", &a[i]);
    
 
}
  
 
printf ("Insira os valores do segundo vetor:\n");
  
 
for (i = 0; i < n; i++)
    
    {
      
 
 
 
scanf ("%d", &b[i]);
    
 
}
  
 
somaVet (a, b, soma, n);
  
printf ("Vetor soma:\n");
  
for (i = 0; i < n; i++)
    
    {
      
 
printf ("%d ", soma[i]);
    
 
}
  
 
return 0;

 
}


