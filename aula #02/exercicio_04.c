#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float  kg;


    printf("Digite a massa corporal (em kg): \n ");
    printf("");
    scanf("%f", &kg);

    float rec_agua = kg*0.035;

    printf("Quantidade aproximada de agua recomendada por dia:\n");
    printf("%.1f Litros", rec_agua
           );

    return 0;

}
