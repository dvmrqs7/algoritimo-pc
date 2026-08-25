#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float vl_in, angulo, alcance, rad, grav;

    printf("Informe a velocidade inicial (m/s): ");
    scanf("%f", &vl_in);

    printf("Informe  �ngulo de lan�amento em graus: ");
    scanf("%f", &angulo);

    rad = (angulo*3.14)/180;
    alcance = ((pow(vl_in, 2)) * (sin(2*rad))) / 9.8;

    printf("O alcance horizontal estimado �: %.2f", alcance);

    return 0;
}
