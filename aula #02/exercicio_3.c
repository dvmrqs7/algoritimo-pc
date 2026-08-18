#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float semanas;
    printf("Qual a quantidade de semanas de gestação? ");
    scanf("%f", &semanas);
    float meses = (semanas * 7)/30;
    printf("Tempo de gestação aproximado:\n", meses);
    printf("%.1f", meses);
    return 0;
}
