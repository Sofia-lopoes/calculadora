#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 setlocale(LC_ALL, "Portuguese"); 
  
  
         //variaveis 
         int opcao; 
         int operacao; 
         float numero1; 
         float numero2; 
         float total; 
  
         opcao=1; 
          while (opcao==1){ 
                  //opera�oes 
                  printf ("Digite 1 para Multiplica��o \n"); 
                  printf ("Digite 2 para Adi��o \n"); 
                  printf ("Digite 3 para Subtra��o \n"); 
                  printf ("Digite 4 para Divis�o \n"); 
                  scanf("%d", &operacao); 
  
                  //numeros 
                  printf("Digite um valor: "); 
                  scanf("%f", &numero1); 
                  printf("Digite outro valor: "); 
                  scanf ("%f", &numero2); 
  
  
                  //switch 
                  switch (operacao){ 
                          case 1: 
                          total = numero1 * numero2; 
                          break; 
  
                          case 2: 
                          total = numero1 + numero2; 
                          break; 
  
                          case 3: 
                          total = numero1 - numero2; 
                          break; 
  
                          case 4: 
                          total = numero1 / numero2; 
                          break; 
                 
				 
				                         
				  } 
  
                  //resultados 
 							printf("o resultado � %.2f \n", total); 
                          printf("Se quiser continuar DIGITE 1,caso queira terminar sua opera�ao DIGITE 0 \n"); 
                          scanf("%d", &opcao);

}
	return 0;
}
