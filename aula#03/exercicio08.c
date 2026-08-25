#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float num1, num2, num3, media_pond, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &num1);

    printf("Informe a segunda nota: ");
    scanf("%f", &num2);

    printf("Informe a terceira nota: ");
    scanf("%f", &num3);

    media_pond = ((num1*1)+(num2*2)+(num3*4))/(1+2+4);

    printf("A média ponderada do aluno é de: %.2f", media_pond);

    return 0;
}
