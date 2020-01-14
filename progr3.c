#include <stdio.h>

int main(void);
 int choice;
 int menu;
 int euro;
 int dollar;
 int cad;
 int conversaçao;

 printf("Insere o primeiro numero consoante a conversaçao desejada a:\n->");
   scanf("%d", &conversaçao)
  
  do
{
 printf("Menu\n\n1. euro\n2. dollar\n3. cad\n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("Menu.\n");
          break;
          
     case 2:
     printf("insere :\n\t->");
        scanf("%d" ,&euro);
     printf("insere :\n\t->");
        scanf("%s" ,&dollar);
     printf("Insere :\n\t->");
        scanf("%d" ,&cad);

return 0;

    