#include <stdio.h>

int main(void);
 int choice;
 int numero;
 int antecedor;
 int sucessor;


 printf("Insira o numero desejado :\n->");
 scanf("%d", &numero)

printf("inserir o antecedor :\n->");
scanf("%d", &antecedor)

do
{
 printf("numero\n\n1. antecedor\n2. sucessor\n3. \n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("numero inteiro.\n");
          break;
          
     case 2:
     printf("insere o numero inteiro:\n\t->");
        scanf("%d" ,&numero)
     printf("insere o sucessor:\n\t->");
        scanf("%s" ,&sucessor)
    printf("insira o antecedor :\n\t->");
        scanf("%s" ,&antecedor)

return 0;
