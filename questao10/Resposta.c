#include <stdio.h>

 int
main ()
{
  
int t_char = sizeof (char);
  
int t_int = sizeof (int) - 2;
  
int t_float = sizeof (float);
  
int t_double = sizeof (double);
  
int t_x = 4092;
  
int i;
  
 
printf ("para o vetor V do tipo char: \n");
  
for (i = 1; i <= 3; i++)
    
    {
      
printf ("x + %d  = %d  \n", i, t_x + t_char * i);
    
}
  
printf ("\n\n");
  
printf ("para o vetor V do tipo int: \n");
  
for (i = 1; i <= 3; i++)
    
    {
      
printf ("x + %d  = %d  \n", i, t_x + t_int * i);
    
}
  
printf ("\n\n");
  
printf ("para o vetor V do tipo float: \n");
  
for (i = 1; i <= 3; i++)
    
    {
      
printf ("x + %d  = %d  \n", i, t_x + t_float * i);
    
}
  
printf ("\n\n");
  
printf ("para o vetor x do tipo double: \n");
  
for (i = 1; i <= 3; i++)
    
    {
      
printf ("x + %d  = %d  \n", i, t_x + t_double * i);
    
}
  
return 0;

}
//OS RESULTADOS SÃO IGUAIS AOS RESULTADOS ESPERADOS//