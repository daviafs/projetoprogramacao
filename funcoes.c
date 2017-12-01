 #include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void menu1(void){
  
    int idioma = 0;
  
    printf("(1) English\n");
    printf("(2) Portuguese\n");
    printf("Select your language:");
}

void menuing(void){

    printf("\n");
    printf("MATRIX MANIPULATION PROGRAM\n");
    printf("(1) Size of matrix A\n");
    printf("(2) Size of matrix B\n");
    printf("(3) Fill matrix A with random numbers\n");
    printf("(4) Fill matrix B with random numbers\n");
    printf("(5) Assign a value to an element of A\n");
    printf("(6) Assign a value to an element of B\n");
    printf("(7) Add the matrices (C=A+B)\n");
    printf("(8) Subtract the matrices (C=A-B)\n");
    printf("(9) Multiply the matrices (C=A*B)\n");
    printf("(10) Show matrix A\n");
    printf("(11) Show matrix B\n");
    printf("(12) Show matrix C\n");
    printf("(13) Read matrix A from a file\n");
    printf("(14) Read matrix B from a file\n");
    printf("(15) Write matrix C in a file\n");
    printf("(16) Change language\n");
    printf("(17) Exit\n");

    printf("Choose an option:");
}

void menuport(void){
    
    printf("\n");
    printf("PROGRAMA DE MANIPULAÇÃO DE MATRIZES\n");
    printf("(1) Tamanho da matriz A\n");
    printf("(2) Tamanho da matriz B\n");
    printf("(3) Preencher matriz A com valores aleatorios\n");
    printf("(4) Preencher matriz B com valores aleatorios\n");
    printf("(5) Atribuir valor para um elemento de A\n");
    printf("(6) Atribuir valor para um elemento de B\n");
    printf("(7) Soma das matrizes (C=A+B)\n");
    printf("(8) Subtracao das matrizes (C=A-B)\n");
    printf("(9) Multiplicacao das matrizes (C=A*B)\n");
    printf("(10) Mostrar matriz A\n");
    printf("(11) Mostrar matriz B\n");
    printf("(12) Mostrar matriz C\n");
    printf("(13) Ler a matriz A de um arquivo\n");
    printf("(14) Ler a matriz B de um arquivo\n");
    printf("(15) Escrever a matriz C em um arquivo\n");
    printf("(16) Mudar de idioma\n");
    printf("(17) Sair\n");

    printf("Digite a opcao:");
}


void Rand(void){
  srand((unsigned int)time(NULL));
  rand();
  rand();
  rand();
  
}

void fill(float matrix[20][20], int lines, int columns){
 int num=0;
 int num1=0;
 int number=0;
 
         //Para gerar numeros aleotorios flutuantes será preciso usar a função variavel=(float)(rand())/(float)(RAND_MAX)*100.0
         
         if(number==0){
           Rand();
         }else{
           srand(time(NULL));
         }
  for(num=0;num<=lines-1;num++){
     for(num1=0;num1<=columns-1;num1++){
         number++;
         
         matrix[num][num1]=(float)(rand())/(float)(RAND_MAX)*100.0;
         if(num1==0){
           printf("                   ");
         }
         if(matrix[num][num1]<10){
         }else{
         }
          

     }
      printf("\n");
 }


 number++;
}

void filL(float matrix[20][20], int lines, int columns){
 int num=0;
 int num1=0;
 int number=0;
 
         //Para gerar numeros aleotorios flutuantes será preciso usar a função variavel=(float)(rand())/(float)(RAND_MAX)*100.0
   
         
         if(number==0){
           Rand();
         }else{
           srand(time(NULL));
         }
  for(num=0;num<=lines-1;num++){
     for(num1=0;num1<=columns-1;num1++){
         number++;
         
         matrix[num][num1]=(float)(rand())/(float)(RAND_MAX)*100.0;
         if(num1==0){
           printf("                   ");
         }
         if(matrix[num][num1]<10){
         }else{
         }
          

     }
      printf("\n");
 }
}

void assign(float matrix[20][20], int iA, int jA){
    int num=0;
    int num1=0;
            
    for(num=0;num<iA;num++){
        for(num1=0;num1<jA;num1++){
            printf("\nType the valor of the place [%d][%d]: ",num+1,num1+1);
            scanf("%f",&matrix[num][num1]);
        }
    }
    
   }


void sum(float matrixA[20][20], float matrixB[20][20], float matrixC[20][20], int linhA,int colunA,int linhB,int colunB,int linhC,int colunC){
  int num,num1;
  if((linhA==linhB)&&(colunA==colunB)){
    linhC=linhA;
    colunC=colunA;
    for(num=0;num<=linhC-1;num++){
      for(num1=0;num1<=colunC-1;num1++){
        matrixC[num][num1]=matrixA[num][num1]+matrixB[num][num1];
        printf(" %f",matrixC[num][num1]);
      }
      printf("\n");
    }
  }else{
    printf("\nYou can't make the sum because the size of your arrays different\n");
  }
   
}

float sub(float matrixA[20][20], float matrixB[20][20], float matrixC[20][20], int linhA,int colunA,int linhB,int colunB,int linhC,int colunC){
  int num,num1;
  
  if((linhA==linhB)&&(colunA==colunB)){
    linhC=linhA;
    colunC=colunA;
    for(num=0;num<=linhC-1;num++){
      for(num1=0;num1<=colunC-1;num1++){
        matrixC[num][num1]=matrixA[num][num1]-matrixB[num][num1];
        printf(" %f",matrixC[num][num1]);
      }
      printf("\n");
    }
  }else{
    printf("\nYou can't make the subtraction because the size of your arrays different\n");
  }
   
}

void mult(float matrixA[20][20], float matrixB[20][20], float matrixC[20][20], int linhA,int colunA,int linhB,int colunB,int linhC,int colunC){

  int i,j, X, num=0, sum=0;

  if(colunA==linhB){
    linhC=linhA;
    colunC=colunB;
    printf("linb= %d\n\n\n", linhB);
   
    for(i=0; i<linhC; i++)
{
  for(j=0; j<colunC; j++)
        {
                 matrixC[i][j]=0;
                 for(X=0; X<linhB; X++)
                 {


                 matrixC[i][j] =  matrixC[i][j]+(matrixA[i][X] * matrixB[X][j]) ;

                 }
               printf("%f ",matrixC[i][j]);
                 }
printf("\n");
  }}else{
printf("Have worries")    ;
  }
}

void show( float matrix[20][20],int linha,int coluna){
  int i,j;
  
  for(i=0;i<=linha-1;i++){
    for(j=0;j<=coluna-1;j++){
      printf("%f ",matrix[i][j]);
    }
    printf("\n");
  }
}
void read(float matriz[20][20],int *linha, int *coluna){
        FILE *entrada;
        int i,j;
	char nome[200],teste;
	int qtdlinhas,qtdcolunas,qtdenter,qtdesp;	

	printf("Digite o endereço");
	scanf("%s",&nome);
        entrada=fopen(nome,"r");
	teste=fgetc(entrada);
	
	while(teste!=EOF){
		if(teste==' '){
			qtdesp=qtdesp+1;
		}
		if(teste=='\n'){
			qtdenter=qtdenter+1;
		}
	}
	qtdlinhas=qtdenter+1;
	qtdcolunas=(qtdesp+qtdlinhas)/qtdlinhas;
	rewind(entrada);	
        for(i=0;i<qtdlinhas;i++){
            for(j=0;j<qtdcolunas;j++){
                fscanf(entrada,"%d",matriz[i][j]);
        }
        }
	*linha=qtdlinhas;
	*coluna=qtdcolunas;
        fclose(entrada);
}

void write(){
  
}

