#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float valor_raio;
    printf("Qual é a medida do Raio (em cm)? ");
    scanf("%f", &valor_raio);
    float valor_perimetro = 2*3.14159*valor_raio;
    printf("O perímetro da circunferência é: %.2f", valor_perimetro);

    return 0;
}
