#include <stdio.h>
 int main()
 {
   int numero;
   int numero2;
   char escolha;

   printf("Digite um numero: \n");
   scanf("%d", &numero);

   printf("Digite um segundo numero: \n");
   scanf("%d", &numero2);

   printf("Digite a operacao que voce deseja (+, -, *, /): \n"); 
   scanf(" %c", &escolha);

   
   if (escolha == '+') {
      printf("O resultado e: %d\n", numero + numero2);
   } else if (escolha == '-') {
      printf("O resultado e: %d\n", numero - numero2);
   } else if (escolha == '*') {
      printf("O resultado e: %d\n", numero * numero2);
   } else if (escolha == '/') {
      printf("O resultado e: %d\n", numero / numero2);
   }
   
   return 0;


 }