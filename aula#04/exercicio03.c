#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float media, frqc;

    printf("Digite a nota média do aluno: ");
    scanf("%f", &media);

    printf("Digite a frequência do aluno: ");
    scanf("%f", &frqc);

    if (frqc <75){
        printf("Reprovado por falta!");
    } else if (media <6){
        printf("Reprovado por nota!");
    } else {
        printf("Aprovado!");
    }

    return 0;
}
