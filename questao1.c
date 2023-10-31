#include <stdio.h>
#include<stdlib.h>

int escolherOpcao();
void opcaoVista(float valor);
float opcaoDuas(float valor);
float opcaoTres(float valor, int opcao1);
main() {
  
  float valor; 
  printf("Digite o valor total da compra:\n");
  scanf(" %f", &valor);

  int opcao1;
  int opcao=escolherOpcao();

  switch(opcao){
    case 1:
      opcaoVista(valor);
    break;
    case 2:
      opcaoDuas(valor);
    break;
    case 3:
      opcaoTres(valor, opcao1);
    break;
  } 
}
int escolherOpcao(){
  int opcao;
  printf("Escolha uma opção: \n ");
  scanf("%d",&opcao);

  return opcao;
}
void opcaoVista(float valor){
  float totalCompra = valor - (valor * 0.10 );
  printf("o valor da compra é: R$%.2f", totalCompra);
}
float opcaoDuas(float valor){
   float totalCompra = valor/2;
  printf("o valor da compra é: Duas parcelas de R$ %.2f", totalCompra);
  return totalCompra;
}
float opcaoTres(float valor,int opcao1){
  float totalCompra;

  if (valor < 100){
    printf("Não é possivel dividir");
    return 0;
  }else{
    printf("Quantidade de parcelas: \n ");
    scanf("%d", &opcao1);
    switch(opcao1){
      
      case 3:
        totalCompra = valor + ((valor *0.03)*3);
      break;
      case 4:
        totalCompra = valor + ((valor *0.03)*4);
      break;
      case 5:
        totalCompra = valor + ((valor *0.03)*5);
      break;
      case 6:
        totalCompra = valor + ((valor *0.03)*6);
        break;
      case 7:
        totalCompra = valor + ((valor *0.03)*7);
      break;
      case 8:
        totalCompra = valor + ((valor *0.03)*8);
      break;
      case 9:
        totalCompra = valor + ((valor *0.03)*9);
        break;
      case 10:
        totalCompra = valor + ((valor *0.03)*10);
      break;
     }
  }
  printf("\no valor da compra é: %.2f", totalCompra);
  return totalCompra;
}  */
/* void locacoesGratuitas(int locacoes[500],int gratuito[500]){
  for(int i=0; i<500; i++){
    gratuito[i] = locacoes[i]/15;
  }
