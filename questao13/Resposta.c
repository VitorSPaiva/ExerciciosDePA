/*
*	13. Implemente em linguagem C uma função em um programa de computador que leia n valores do
*	tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
*	realizar a tarefa.
*/

#include <stdio.h>
#include <stdlib.h>

void
troca (float *a, float *b)
{
  float tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void
crescente (float v[], int n)
{
  for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
	{
	  if (v[i] > v[j])
	    {
	      troca (&v[i], &v[j]);
	    }
	}
    }
}

int
main ()
{
  int n;

  printf ("Digite a quantidade de numeros: ");
  scanf ("%d", &n);
  float *v;
  v = malloc (n * sizeof (float));
  for (int i = 0; i < n; i++)
    {
      scanf ("%f", &v[i]);
    }
  crescente (v, n);
  for (int i = 0; i < n; i++)
    {
      printf ("%.2f ", v[i]);
    }
  free (v);
  return 0;
}
