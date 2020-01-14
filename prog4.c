#include <stdio.h>

int main(void);
 int choice;
 int numerointeiro;
 int num= 7;
 int dias = 7;
 int domingo;
 int segunda;
 int terça;
 int quarta;
 int quinta;
 int sexta;
int sabado;
 

 printf("insira o um numero :\n->");
 scanf("%d" ,&numerointeiro)

 
 
 do
{
 printf("numerointeiro\n\n1. num\n2. dias\n3. \n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf(" dias da semana\n");
          break;
          
     case 2:

    printf("primeiro dia da semana:\n\t->");
        scanf("%d" ,&domingo)
    printf("segundo dia da semana :\n\t->");
        scanf("%s" ,&segunda)
    printf("terceiro dia da semana :\n\t->");
        scanf("%s" ,&terça)
    printf("quarto dia da semana :\n\t->");
        scanf("%s" ,&quarta)
    printf("quinto dia da semana :\n\t->");
        scanf("%s" ,&quinta)
    printf("sexto dia da semana :\n\t->");
        scanf("%s" ,&sexta)
    printf("setimo dia da semana :\n\t->");
        scanf("%s" ,&sabado)

    case 3:

    printf("")


return 0;
