#include <stdio.h>
int main () {
double massa, aceleracao, tempo, velocidade, espaco, trabalho;
scanf("%lf", &massa);
scanf("%lf", &aceleracao);
scanf("%lf", &tempo);
espaco = (aceleracao*tempo*tempo)/2;
velocidade = aceleracao*tempo;
trabalho = (massa*1000*velocidade*velocidade)/2;
printf("VELOCIDADE = %.2lf\n", velocidade*3.6);
printf("ESPACO PERCORRIDO = %.2lf\n", espaco);
printf("TRABALHO REALIZADO = %.2lf\n", trabalho);
    return 0;
}