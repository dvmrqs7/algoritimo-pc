#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int num1, num2, mult, soma, subi;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite mais um número: ");
    scanf("%d", &num2);

    soma = num1+num2;
    subi = num1-num2;
    mult = num1*num2;

    printf("A soma entre os numeros é: %d\n", soma);
    printf("A subtração entre os números é: %d\n", subi);
    printf("A multiplicação entre os números é: %d\n", mult);

    return 0;
}
