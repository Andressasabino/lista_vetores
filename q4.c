#include <stdio.h>

int main() {
  int numero[10], i, j, aux;

  // lendo e armazenando os números
  for(i = 0; i < 10; i++){
    printf("Entre com um número qualquer: ");
    scanf("%d", &numero[i]);
  }
  // ordenando os números
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
}
