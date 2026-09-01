#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float n1, n2, media;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if(media >=6){
        printf("Parabéns! Você foi aprovado! \n");
       } else {
        printf("Sinto muito. Você esta reprovado. \n");
    }
    printf("Sua média é: %.1f." , media);

    return 0;
}
