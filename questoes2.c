#include <stdio.h>
#include <stdlib.h>
void locacoesGratuitas(int locacoes[500], int gratuitas[500]){
  
 for(int i=0; i <500; i++){
  gratuitas [i] = locacoes [i]/15;
}
}

 main() {
int locacoes[500], gratuitas [500];
   //preencher de forma aleatoria
   for(int i=0; i <500; i++){
     locacoes[i] = rand() %100 +1;
   }
   for(int i=0; i <10; i++){
     printf("%d\n", locacoes[i]);
}
   locacoesGratuitas(locacoes,gratuitas);
   for (int i = 0; i <10; i++){
     printf("\n O cliente[%d] tem direito a %d filmes", i, gratuitas[i]);
   }
 }
