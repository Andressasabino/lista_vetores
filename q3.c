#include <stdio.h>

int main() {
  int i, cont_num = 0, numeros, numero[10], vetor[10], aux = 0;

  // lendo e armazenando os números
  for(i = 0; i < 10; i++){
    printf("Entre com um número: ");
    scanf("%d", &numero[i]);
  }

  // escrevendo um número qualquer
  printf("Escreva um número qualquer: ");
  scanf("%d", &numeros);
  
  // verificando quantas vezes o número aparece
  for(i = 0; i < 10; i++){
    if(numeros == numero[i]){
      cont_num++;
    }
  }

  // verificando se existe ou não e criando outro vetor sem o número
  if(cont_num > 0){
    for(i = 0; i < 10; i++){
      if(numeros != numero[i]){ // o numero que for igual ao numero digitado não entra no vetor
        vetor[i - aux] = numero[i];  // copiando o vetor 
      }
      else{
        aux++;
      }
    }
  }

  for(i = 0; i < 10; i++){
    printf("%d, ", numero[i]);
  }
  printf("\n\n");
  for(i = 0; i < 10; i++){
    printf("%d, ", vetor[i]);
  }
  return 0;
}
