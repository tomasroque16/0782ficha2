#include <stdio.h>

int main(void);
 int choice;
 int temperatura;
 int graus;
 int fahrenheit;
 int celsius;
 int conversaçao;

 printf("Inserir o grau desejadoa:\n->");
 scanf("%d", &graus)

printf("inserir a medida da conversaçao a:\n->");
scanf("%d", &conversaçao)

do
{
 printf("temperatura\n\n1. graus\n2. conversaçao\n3. \n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("conversaçao.\n");
          break;
          
     case 2:
     printf("insere o graus desejado:\n\t->");
        scanf("%d" ,&fahrenheit);
     printf("insere o graus desejado:\n\t->");
        scanf("%s" ,&celsius);

return 0;