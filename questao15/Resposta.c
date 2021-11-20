/*
*	15. Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
*	de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
*	a função de comparação
*/

#include <stdio.h>
#include <stdlib.h>

void troca (float *a, float *b)
{
  float tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

float compare (float a, float b) {
   return ( a - b );
}

void crescente (float v[], int n, float (*f) (float, float))
{
  for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
        {
	        if (compare(v[i],v[j]) > 0)
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
  crescente (v, n, compare);
  for (int i = 0; i < n; i++)
    {
      printf ("%.2f ", v[i]);
    }
  free (v);
  return 0;
}