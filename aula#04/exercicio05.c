#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char opcao;
    int diarias;

    printf("Hospedagem Anália\n");
    printf("[S] Quarto Simples\n");
    printf("[D] Quarto Duplo\n");
    printf("[T] Quarto Triplo\n");
    printf("Digite uma opção: ");
    scanf(" %c", &opcao);


    printf("Digite a quantidade de diárias: ");
    scanf("%d", &diarias);

    if(opcao == 's' || opcao == 'S'){
        printf("Total a pagar: R$%d", (diarias*300));
    } else if(opcao == 'd' || opcao == 'D'){
        printf("Total a pagar: R$%d", (diarias*450));
    } else if (opcao == 't' || opcao == 'T'){
        printf("Total a pagar: R$%d", (diarias*500));
    }else{
        printf("Opção Inválida!");
    }

    return 0;
}
