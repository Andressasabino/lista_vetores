#include <stdio.h>

int main() {
  int numero[11], i, j, aux = 0, num;

  // lendo e armazenando os números
  for(i = 0; i < 10; i++){
    printf("Entre com um número qualquer %d: ", i+1);
    scanf("%d", &numero[i]);
  }
  // ordenando os números do vetor com 10 elementos
  for(i = 0; i < 10; i++){
    for(j = i+1; j < 10; j++){
      if(numero[i] > numero[j]){
        aux = numero[i];
        numero[i] = numero[j];
        numero[j] = aux;
      }
    }
  }
  // mostrando a ordem de cada
  for(i = 0; i < 10; i ++){
   printf("%d ", numero[i]);    
  }
  // adicionando um número qualquer e dando uma posição no vetor pra ele estar incluido nele
  printf("\nAdicione um número: ");
  scanf("%d", &num);
  numero[10] = num;
  // ordenando os números com o vetor de 11 elementos
  for(i = 0; i < 11; i++){
    for(j = i+1; j < 11; j++){
      if(numero[i] > numero[j]){
        aux = numero[i];
        numero[i] = numero[j];
        numero[j] = aux;
      }
    }
  }
  // mostrando a nova sequência ordenada com o novo número
  for(i = 0; i < 11; i ++){
   printf("%d ", numero[i]);    
  }
}
