#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float x1, x2, y1, y2, d;

    printf("Informe a coordenada X do 1º ponto: ");
    scanf("%f", &x1);

    printf("Informe a coordenada y do 1º ponto ");
    scanf("%f", &y1);

    printf("Informe a coordenada x do 2º ponto: ");
    scanf("%f", &x2);

    printf("Informe a coordenada y do 2º ponto ");
    scanf("%f", &y2);

    d = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));

    printf("A distancia entre os pontos é: %.2f", d);

    return 0;
}
