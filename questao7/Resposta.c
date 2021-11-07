/*
*	7. Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas?
*	Justifique.
*/

p = mat + 1; // mat[1]
p = mat++; // erro no incremento. Não é possível utilizar o operador de incremento no vetor
p = ++mat; // erro no incremento. Não é possível utilizar o operador de incremento no vetor
x = (*mat)++; /* vai imprimir o conteúdo de mat[0]. O = irá pegar primeiro o conteúdo de mat[0] para  depois usar
 o operador de incremento. */

// somente a primeira é valido, é o único que irá andar de fato pela memória e chegar no endereço de mat[1]