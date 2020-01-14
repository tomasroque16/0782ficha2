#include <stdio.h>

int main(void);
 int choice;
 int quanttotal = 500 000 00;
 int venc1;
 int venc2;
 int venc3;
 int total;
 int percentagem;

 printf("insira a quantia total dos vencedores :\n->");
 scanf("%d" ,&quanttotal)

 printf("insira o valor total de cada um :\n->");
 scanf("%s" ,&total)
 
 do
{
 printf("quanttotal\n\n1. venc1\n2. venc2\n3. venc3\n4. total\n5. \n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("quantia total dos vencedores\n");
          break;
          
     case 2:
     printf("insere a quantia do primeiro vencedor:\n\t->");
        scanf("%d" ,&venc1)
     printf("insere a quantia do segundo vencedor:\n\t->");
        scanf("%s" ,&venc2)
    printf("insira a quantia do terceiro vencedor :\n\t->");
        scanf("%s" ,&venc3)

return 0;
