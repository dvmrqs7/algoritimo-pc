#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float num1, num2, num3, num4, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &num1);

    printf("Informe a segunda nota: ");
    scanf("%f", &num2);

    printf("Informe a terceira nota: ");
    scanf("%f", &num3);

    printf("Informe a quarta nota: ");
    scanf("%f", &num4);

    media = (num1+num2+num3+num4)/4;

    printf("A média final do aluno é de: %.2f", media);

    return 0;
}
