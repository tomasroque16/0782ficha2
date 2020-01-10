#include <stdio.h>

int main(void);
 int choice;
 int negocio;
 int tipo;
 int localizaçao;
 int area;
 int moradia= 550;
 int terreno= 300;
 int quinta= 200;
 int armazem= 600;
 int pdl;
 int lagoa;
 int nordeste;
 int valor;

 printf("Insere o tipo de negocio que voçe deseja a:\n->");
   scanf("%d", &negocio)
  
  do
{
 printf("tipo\n\n1. localizaçao\n2. area\n3. negocio\n4. \n\n\t->");
   scanf("%d",&negocio)

switch (choice)
 {
     case 1:
        printf("negocio.\n");
          break;
          
     case 2:
     printf("insere o tipo de negocio  :\n\t->");
        scanf("%d" ,&tipo);
     printf("insere a localizaçao desejada :\n\t->");
        scanf("%s" ,&localizaçao);
     printf("Insere a area desejada :\n\t->");
        scanf("%d" ,&area);


    case 3:
    printf("tipo de espaço :\n\t->");
        scanf("%s" ,&moradia)
    printf("tipo de espaço:\n\t->");
        scanf("%d" ,&terreno)
    printf("tipo de espaço :\n\t->");
        scanf("%s" ,&quinta)
    printf("tipo de espaço:\n\t->");
        scanf("d" ,&armazem)      

    case 4:

    printf("localizaçao :\n\t->");
    scanf("%d" , &pdl)
     printf("localizaçao :\n\t->");
    scanf("%d" , &lagoa)
     printf("localizaçao :\n\t->");
    scanf("%d" , &nordeste)

    break;

 }
return 0;
