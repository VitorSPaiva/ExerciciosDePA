/*
*	8. O que fazem os seguintes programas em C?
*/

//1)
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i)); // irá imprimir os conteúdos do vetor vet[]
  }
}

//2)
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i); // irá imprimir os endereços do vetor vet[]
  }
}
