#include <stdio.h>

int main() {
  int VET[10], i, j;

  for(i = 0; i < 10; i++){
    printf("Coloque um número: ");
    scanf("%d", &VET[i]);
  }

  for(i = 0; i < 10; i++){
    for(j = i + 1; j < 10; j++){
      if(VET[i] == VET[j]){
        printf("\nVET[%d] = VET[%d] = %d\n", i, j, VET[i]);
      }
    }
  }

  return 0;
}
