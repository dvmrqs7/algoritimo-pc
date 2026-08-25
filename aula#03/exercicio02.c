#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int qtd_horas, qtd_minutos, qtd_convertida;

    printf("Digite a hora: ");
    scanf("%d", &qtd_horas );

    printf("Digite os minutos: ");
    scanf("%d", &qtd_minutos );

    qtd_convertida = (qtd_horas*60)+qtd_minutos;

    printf("Se passaram o total de: %d minutos", qtd_convertida);
    return 0;
}
