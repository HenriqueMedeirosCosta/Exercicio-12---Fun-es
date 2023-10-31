#include <stdio.h>
void imprimir( int matriz[10][10]);
void trocarLinha(int mat [10][10]);
void trocarColuna(int mat [10][10]);
void trocarDiagonal(int mat [10][10]);
void trocarLinhaColuna(int mat [10][10]);

int main(){

      int matriz [10][10];
      for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
          matriz[i][j]= i * 10+j;
        }
        printf("\n");
      }
      //imprimir(matriz);
      //trocarLinha(matriz);
      imprimir(matriz);
      //trocarColuna(matriz);
      //trocarDiagonal(matriz);
      trocarLinhaColuna(matriz);
      printf("\n\n");
      imprimir(matriz);
      
    }
void imprimir( int matriz[10][10]){
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      printf("%d \t", matriz[i][j]);
    }
    printf("\n");
  }
}

void trocarLinha(int mat [10][10]){
  int aux;
  for(int i=0; i<10; i++){
    aux = mat[1][i];
    mat [1][i]= mat [7][i];
    mat [7][i]= aux;
  }
}  

void trocarColuna(int mat [10][10]){
  int aux;
  for(int i=0; i<10; i++){
    aux = mat[i][3];
    mat [i][3]= mat [i][9];
    mat [i][9]= aux;
  }
}

void trocarDiagonal(int mat [10][10]){
  int aux;
  for(int i=0; i<10; i++){
    aux = mat[i][i];
    mat [i][i]= mat [i][9 -i];
    mat [i][9-i]= aux;
  }
}

void trocarLinhaColuna(int mat [10][10]){
  int aux;
  for(int i=0; i<10; i++){
    aux = mat[4][i];
    mat [4][i]= mat [i][9];
    mat [i][9]= aux;
  }
}
    
  
