#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float larg, comp, valor, caixa, area, qnt_caixas;

    printf("Informe a largura da área (M): ");
    scanf("%f", &larg);

    printf("Informe o comprimento da área (M): ");
    scanf("%f", &comp);

    printf("Informe o valor da caixa (R$): ");
    scanf("%f", &valor);

    area = comp*larg;
    qnt_caixas = ceil(area/2.5);
    caixa = qnt_caixas*valor;


    printf("Área total a ser revestida: %.2f m²\n", area);
    printf("Quantidade de caixas necessárias: %.2f\n", ceil(qnt_caixas));
    printf("Custo total da compra: R$ %.2f", caixa);

    return 0;
}
