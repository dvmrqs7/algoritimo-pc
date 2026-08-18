#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float comprimento, largura;
    printf("Qual é a medida do comprimento do jardim (em M)? ");
    scanf("%f", &comprimento);
    printf("Qual é a medida da largura do jardim (em M)? ");
    scanf("%f", &largura);
    float perimetro = 2*(comprimento+largura);
    float area = comprimento*largura;
    printf("Perímetro do jardim: %.2f m² \n", perimetro);
    printf("Área do jardim: %.2f m²", area);


    return 0;
}
