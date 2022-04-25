#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, num1, num2;

    do {
        printf("---Calculadora\n");
        printf("1- Adicao \n");
        printf("2- Substracao \n");
        printf("3- Multiplicacao \n");
        printf("4- Divisao \n");
        printf("5- Fim \n");
          
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao < 5){
            printf("Digite o numero 1: ");
            scanf("%d",&num1);
            
            printf("Digite o numero 2: ");
            scanf("%d",&num2);
        }

        switch(opcao) {
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0) {
                printf("Nao existe divisao por zero!\n);
                printf("Digite outro valor: \n");
                scanf("%d", &num2);
            }
            printf("Divisao: %d\n", num1 / num2);
            break;
        case 5:
            printf("Saindo do programa\n");
            printf ("Obrigada por sua visita!\n");
            
            printf("\n\n----By: Brunna Sousa");
            break;
        default:
            printf("Opcao inválida.\n");
            printf ("Digite outra opcao: \n");
        }
    } while(opcao != 5);
}