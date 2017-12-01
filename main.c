#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

struct sizematrix{
  int numberlines;
  int numbercolumns;
}M;
struct sizematrix size(){
  struct sizematrix M;
           //Fill the number of lines and columns;
  printf("How many lines do you want in your matrix?");
  scanf("%d",&M.numberlines);
  printf("How many columns do you want in your matrix?");
  scanf("%d",&M.numbercolumns);
  
    return M;
}

int main(){
  
  struct sizematrix B;
  struct sizematrix A;
  float matrixA[20][20], matrixB[20][20], matrixC[20][20];
  float i, j;
  int liinhC,coolunC;
  int opcao, idioma;
  
  opcao = 0;
    
  menu1();
  scanf("%d", &idioma);
    
  do{
      if(idioma == 2){
        menuport();
      }else{
        menuing();
      }
      scanf("%d", &opcao);
      switch (opcao){
          
      // O usuário determina o número de linhas e colunas da matriz A
      case 1:   
          A=size();
          break;
        
      // O usuário determina o número de linhas e colunas da matriz B
        case 2:
          B=size();
          break;
            
      // A matriz A será preenchida com valores aleatórios
      case 3:
          fill(matrixA, A.numberlines,A.numberlines);
          break;
            
      // A matriz B será preenchida com valores aleatórios
      case 4:
          filL(matrixB, B.numberlines,B.numberlines);
          break;
        
      // O usuário irá selecionar a linha e coluna de um elemento de A para atribuir um valor
      case 5:
          assign(matrixA, A.numberlines, A.numberlines);
          break;
        
      // O usuário irá selecionar a linha e coluna de um elemento de B para atribuir um valor
      case 6:
          assign(matrixB, B.numberlines, B.numberlines);
          break;
        
      // Realiza a soma da matriz A com B e o resultado será guardado na matriz C
      case 7:
          sum(matrixA, matrixB, matrixC, A.numberlines, A.numbercolumns, B.numberlines, B.numbercolumns, liinhC, coolunC);
          break;
        
      // Realiza a subtraçõa da matriz A com B e o resultado será guardado na matriz C
      case 8:
          sub(matrixA, matrixB, matrixC, A.numberlines, A.numbercolumns, B.numberlines, B.numbercolumns, liinhC, coolunC);
          break;
        
      // Realiza a multiplicacao da matriz A com B e o resultado será guardado na matriz C
      case 9:
          
          break;
        
      // Mostra a matriz A
      case 10:
          show(matrixA, A.numberlines, A.numbercolumns);
          break;
        
      // Mostra a matriz B
      case 11:
          show(matrixB, B.numberlines, B.numbercolumns);
          break;
        
      // Mostra a matriz C;
      case 12:
          show(matrixC,liinhC,coolunC);
          break;
            
      // Importa e lê a matriz A de um arquivo do tipo ".txt"    
      case 13:
          read(matrixA, &A.numberlines, &A.numbercolumns);
          break;
            
      // Importa e lê a matriz B de um arquivo do tipo ".txt"  
      case 14:
          read(matrixB, &B.numberlines, &B.numbercolumns);
          break;    
        
      // Exporta e escreve a matriz C em um arquivo do tipo ".txt"    
      case 15:
         write(matrixC,&liinhC,&coolunC);
          break;
        
      // Abre o menu para mudar o idioma do programa
      case 16:
          menu1();
          scanf("%d", &idioma);
          break;
        
      // Quando o usuário sair do do programa
      case 17:
          if(idioma == 2){
              printf("PROGRAMA ENCERRADO!\n");
          }else{
              printf("END OF THE PROGRAM!\n");
          }
          break;
            
      // Quando o usuário digitar uma opcão que não consta no menu
      default:
          if(idioma == 2){
              printf("Escolha uma opcao disponivel!\n");
          }else{
              printf("Choose an available option!\n");
          }
      }

  } while (opcao != 17);
  

  return 0;
  
}
