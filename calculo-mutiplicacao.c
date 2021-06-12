 /**************************************
   
   Bom Aqui é a Pratica do Meu Estudo
   de Função Scanf,e Valores do Usuário 
          em C language.
          
          
      #    Multiplicação  #
   
   ***************************************/
     
#include <stdio.h>

int main()
{
 
 int valor;
 int secund;
 int result;

 printf("Calcule em Multiplicação\nDigite o valor:");
 scanf("%i", &valor);
 
 printf("Digite Outro Valor:");
 scanf("%i", &secund);
 
 result = valor * secund;
 
 printf("Resultado é = %i", result);
 

  return 0;
}


