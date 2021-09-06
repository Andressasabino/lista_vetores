#include <stdio.h>

int main() {
  int i, cont_dias = 0;
  float media, soma = 0, menor, maior, dias[365];

  // lendo e armazenando as temperaturas média dia
  for(i = 0; i < 365; i++){
    printf("Entre com a temperatura média do dia %d: ", i + 1);
    scanf("%f", &dias[i]);
  }

  // definindo valores para maior e menor, começando do primeira posição do vetor 
  menor = dias[0];
  maior = dias[0];
  
  // percorrendo os números na memória para verificar qual foi a maior e a menor temperatura
  for(i = 0; i < 365; i++){
    if(dias[i] < menor){
      menor = dias[i];
    }
    
    if(dias[i] > maior){
      maior = dias[i];
    }

    soma += dias[i];
  }
  
  // mostrando a maior e a menor temperaturas
  printf("Maior temperatura: %.2f °C\n", maior);
  printf("Menor temperatura: %.2f °C\n", menor);
  
  // fazendo a média
  media = soma / 365;
  printf("Média de temperatura: %.2f °C\n", media);

  // percorrer os dias e verificar quais os dias que foram menor que a média anual e mostrar quantos foram
  for (i = 0; i < 365; i++){
    if(dias[i] < media){
      cont_dias++;
    }
  }
  
  printf("O número de dias com a temperatura menor do que a média anual foram: %d\n", cont_dias);

  return 0;
}
