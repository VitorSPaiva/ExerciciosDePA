/*
*	5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
*	foram obtidas as respostas esperadas).
*/

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i); // esperado. Valores de i: 0, 1, 2, 3, 4.
  printf("vet[%d] = %.1f",i, vet[i]); // esperado. vai imprimir os valores de cada vet[].
  printf("*(f + %d) = %.1f",i, *(f+i)); // esperado. vai caminhar na memoria e imprimir o mesmo resultado do anterior.
  printf("&vet[%d] = %X",i, &vet[i]); // esperado. irá imprimir o endereço de cada vet[]
  printf("(f + %d) = %X",i, f+i); // esperado. irá caminhar na memoria e imprimir o mesmo resultado do anterior.
  }
}