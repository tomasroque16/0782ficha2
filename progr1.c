#include <stdio.h>

int main(void);
 int choice;
 int quilogramas= 0;
 int libras= 0;
 int conversaçao;

 printf("Inserir o tipo de conversaçao a:\n->");
 scanf("%d", &conversaçao)

printf("inserir a medida da conversaçao a:\n->");
scanf("%d", &quilogramas)

printf("inserir nova medida da conversaçao a:\n->");
scanf("%d", &libras)

do
{
 printf("conversaçao\n\n1. quilograma\n2. libra\n3. \n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("conversaçao.\n");
          break;
          
     case 2:
     printf("insere a conversaçao:\n\t->");
        scanf("%d" ,&quilogramas);
     printf("insere a conversaçao:\n\t->");
        scanf("%s" ,&libras);

return 0;