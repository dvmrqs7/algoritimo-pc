#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float consumo_dia, ptc_eqpt, consumo;

    printf("Informe a potencia do equipamento (kWh): ");
    scanf("%f", &ptc_eqpt);

    printf("Informe a quantidade de horas de uso diário (H): ");
    scanf("%f", &consumo_dia);

    consumo =  (ptc_eqpt*consumo_dia*30)/1000;

    printf("O consumo mensal do equipamento é de: %.2f kWh", consumo);

    return 0;

}
