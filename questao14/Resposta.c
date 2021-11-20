/*
*	14. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
*	código, explicando o que faz cada uma das linhas.
*/

#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b ); // função compare, retorna a diferença dos numeros.
}

int main () 
{
    int n; // quantidade de numeros
    printf ("Digite a quantidade de numeros: ");
    scanf ("%d", &n); // entra com um valor em n
    float *v; // define o ponteiro v
    v = malloc(n*sizeof(float)); // cria um vetor com alocação dinamica
    for (int i = 0; i < n; i++)
        {
            scanf ("%f", &v[i]); // entra com os valores de cada pontodo vetor
        } 
    qsort (v, n, sizeof (float), compare); // função para reorganizar os valores do vetor
    for (int i = 0; i < n; i++)
        {
            printf ("%.2f ", v[i]); // imprime os valores já organizados do vetor
    } 
    free(v); // libera a memória
    return 0;
}


 