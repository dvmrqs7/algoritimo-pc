#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float a, b, c, delta, x1, x2 ;

    printf("Informe o valor de A: ");
    scanf("%f", &a);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    printf("Informe o valor de C: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;
    if(delta >= 0){

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("Raízes da equação:\n x1: %.2f \n x2: %.2f \n", x1, x2);
    } else{
        printf("Não existem raízes reais!");
    }

    return 0;
}
