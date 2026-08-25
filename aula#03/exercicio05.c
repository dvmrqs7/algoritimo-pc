#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso, altura, imc;

    printf("Informe a peso da pessoa (KG): ");
    scanf("%f", &peso);

    printf("Informe a altura da pessoa (M&Cm): ");
    scanf("%f", &altura);

    imc =  peso/(altura*altura);

    printf("O índice de massa corporal da pessoa é de: %.2f kg/m²", imc);

    return 0;
}
