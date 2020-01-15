#include <stdio.h>

int main(void);
 int choice;
 int menu;
 int dias;
 int kmilimitados;
 int kmlimitados;
 int tarifa;
 int seguro;
 int categoria;
 int catA;
 int catB;
 int catC;
 int catD;
 int seguroA = 6.50; 
 int seguroB = 7.50;
 int seguroC = 8.50;
 int seguroD = 10.00;
 int tarifaA = 27.50;
 int tarifaB = 32.50;
 int tarifaC = 37.50;
 int tarifaD = 40.00;
 int diariaA = 14.00;
 int diariaB = 17.00;
 int diariaC = 20.00;
 int diariaD = 22.00;
 int diariakm;

 printf("seja bem vindo a rent a car fraga a:\n->");

 printf("insira a categoria desejada a:\n->");
 scanf("%d" ,&categoria)

 printf("insira o numero de dias que deseja o aluger da viatura a:\n->");
 scanf("%d" ,&dias)

 do
{
 printf("categoria\n\n1. km.limitados\n2. seguro\n3. tarifa\n4. \n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf(" categoria.\n");
          break;
          
     case 2:
    printf("insere a categoria :\n\t->");
        scanf("%d" ,&catA)
    printf("insere a categoria :\n\t->");
        scanf("%s" ,&catB)
    printf("Insere a categoria :\n\t->");
        scanf("%d" ,&catC)
    printf("Insere a categoria :\n\t->");
        scanf("%d" ,&catD)

    case 3:
    printf("deseja a km-ilimitados :\n\t->");
        scanf("%d" ,&kmilimitados)
    printf("deseja km.limitados :\n\t->");
        scanf("%s" ,&kmlimitados)

    case 4:
    printf("deseja seguro :\n\t->");
        scanf("%d" ,&seguro)
    printf("insira a categoria de seguro desejada :\n\t->");
        scanf("%d" ,&seguroA)
    printf("insira a categoria de seguro desejada :\n\t->");
        scanf("%d" ,&seguroB)
    printf("insira a categoria de seguro desejada:\n\t->");
        scanf("%d" ,&seguroC)
     printf("insira a categoria de seguro desejada:\n\t->");
        scanf("%d" ,&seguroD)
    
    case 5:
    printf(" insira a categoria para obter a sua tarifa:\n\t->");
        scanf("%d" ,&tarifa)
    printf("insira a categoria desejada para obter a tarifa :\n\t->");
        scanf("%d" ,&tarifaA)
    printf("insira a categoria desejada para obter a tarifa :\n\t->");
        scanf("%d" ,&tarifaB)
     printf("insira a categoria desejada para obter a tarifa :\n\t->");
        scanf("%d" ,&tarifaC)
     printf("insira a categoria desejada para obter a tarifa :\n\t->");
        scanf("%d" ,&tarifaD)

    case 6:
    printf("comissao diaria km por categoria :\n\t->");
        scanf("%d" ,&diariakm)
    printf("insira comissao diaria por km consoante a sua categoria :\n\t->");
        scanf("%d" ,&diariaA)
    printf("insira comissao diaria por km consoante a sua categoria :\n\t->");
        scanf("%d" ,&diariaB)
    printf("insira comissao diaria por km consoante a sua categoria :\n\t->");
        scanf("%d" ,&diariaC)
    printf("insira comissao diaria por km consoante a sua categoria :\n\t->");
        scanf("%d" ,&diariaD)




return 0;

    



 
