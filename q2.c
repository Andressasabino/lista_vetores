#include <stdio.h>

int main() {
  int i, cont_num = 0, numeros, numero[10];

  // lendo e armazenando os números
  for(i = 0; i < 10; i++){
    printf("Entre com um número: ");
    scanf("%d", &numero[i]);
  }
  printf("Escreva um número qualquer: ");
  scanf("%d", &numeros);
  
  for(i = 0; i < 10; i++){
    if(numeros == numero[i]){
      cont_num++;
    }
  }
  printf("O número qualquer que você digitou aparece %d vez(es).",cont_num);
  return 0;
}
