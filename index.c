#include <stdio.h>

int main(void) {

  system ("clear");
  
  int v[50];
  int I, J, N, Auxiliar;

  //----------------------------------------------------------------//
  
  do {
    printf("Entre com a quantidade de numeros: ");
    scanf("%d",&N);
  } while (N > 50);

  printf("\n");

  //----------------------------------------------------------------//
  
  for (I= 0; I < N; I++){
    printf("entre com o %dº numeros: ",I+1);
    scanf("%d",&v[I]);
  }

  //----------------------------------------------------------------//

  for (I = 0; I < N -1; I++){
    for (J = I + 1; J < N; J++){
      if (v[J] < v[I]){
        Auxiliar = v[I];
        v[I] = v[J];
        v[J] = Auxiliar;
      }
    }
  }

  printf("\n");

  //----------------------------------------------------------------//

  for (I = 0; I < N; I++) {
    printf("%d ",v[I]);
  }
  
  printf("\n");
  
  return 0;
}