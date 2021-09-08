#include <stdio.h>

int main() {
  int v1[15], v2[15], i, cont = 0;

  // lendo e armazenando os números dos vetores
  printf("Vetor 1\n");
  for(i = 0; i < 15; i++){
    printf("V1[%d]: ", i);
    scanf("%d", &v1[i]);
  }

  printf("\nVetor 2\n");
  for(i = 0; i < 15; i++){
    printf("V2[%d]: ", i);
    scanf("%d", &v2[i]);
  }
 
  // vendo quantos número têm em comum
  for(i = 0; i < 15; i++){
    if(v1[i] == v2[i]){
      cont++;
    }
  }
  
  // mostrando a quantidade de números nas mesmas posições
  printf("\nSão %d vezes que aparecem elementos iguais e na mesma posição no vetor1 e vetor2 ao mesmo tempo.\n", cont);

  return 0;
}
