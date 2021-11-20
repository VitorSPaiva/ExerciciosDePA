#include <stdio.h>
#include<stdlib.h>

 void 
multiplicaMat (int **a, int **b, int **c, int linA, int colA, int colB) 
{
  
 
int i, j, k;
  
 
for (i = 0; i < linA; i++)
    
    {
      
 
for (j = 0; j < colB; j++)
	
	{
	  
 
c[i][j] = 0;
	  
 
for (k = 0; k < colA; k++)
	    
	    {
	      
 
c[i][j] += (a[i][k] * b[k][j]);
	    
 
}
	
 
}
    
 
}

 
}


 
 
 
 
 
int 
main (void) 
{
  
 
int linA, colA, colB;
  
printf ("Insira o numero de linhas de A:\n");
  
 
scanf ("%d", &linA);
  
 
printf ("Insira o numero de colunas de A:\n");
  
 
scanf ("%d", &colA);
  
 
printf ("Insira o numero de colunas de B:\n");
  
 
scanf ("%d", &colB);
  
 
int **a;
  
 
int **b;
  
 
int **c;
  
 
int i, j;
  
 
a = (int **) malloc (linA * sizeof (int *));
  
 
b = (int **) malloc (colA * sizeof (int *));
  
 
c = (int **) malloc (linA * sizeof (int *));
  
 
a[0] = malloc (colA * linA * sizeof (int));
  
 
b[0] = malloc (colB * colA * sizeof (int));
  
 
c[0] = malloc (linA * colB * sizeof (int));
  
 
 
for (i = 1; i < linA; i++)
    
    {
      
 
a[i] = a[i - 1] + colA;
    
 
}
  
 
for (i = 1; i < colA; i++)
    
    {
      
 
b[i] = b[i - 1] + colB;
    
 
}
  
 
for (i = 1; i < linA; i++)
    
    {
      
 
c[i] = c[i - 1] + colB;
    
 
}
  
 
 
printf ("Insira os termos da matriz A:\n");
  
 
for (i = 0; i < linA; i++)
    
    {
      
 
for (j = 0; j < colA; j++)
	
	{
	  
 
scanf ("%d", &a[i][j]);
	
 
}
    
 
}
  
 
printf ("Insira os termos da matriz B:\n");
  
 
for (i = 0; i < colA; i++)
    
    {
      
 
for (j = 0; j < colB; j++)
	
	{
	  
 
scanf ("%d", &b[i][j]);
	
 
}
    
 
}
printf("Matriz A:\n");
for (i = 0; i < linA; i++)
    
    {
      
 
for (j = 0; j < colB; j++)
	
	{
	  
 
printf ("%d ", a[i][j]);
	
 
}
      
 
printf ("\n");
    
 
}
printf("Matriz B:\n");
for (i = 0; i < linA; i++)
    
    {
      
 
for (j = 0; j < colB; j++)
	
	{
	  
 
printf ("%d ", b[i][j]);
	
 
}
      
 
printf ("\n");
    
 
}
 
multiplicaMat (a, b, c, linA, colA, colB);
  
 printf("Matriz C:\n");
for (i = 0; i < linA; i++)
    
    {
      
 
for (j = 0; j < colB; j++)
	
	{
	  
 
printf ("%d ", c[i][j]);
	
 
}
      
 
printf ("\n");
    
 
}
  
 
return 0;

 
}