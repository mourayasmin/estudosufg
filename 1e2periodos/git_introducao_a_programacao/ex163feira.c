#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Feira{
    int m[50], p[50], qtd[50];
    char produtos[500], compras[500]; 
    float preço[500], total[50];
}Feira;

int main () {

int n;
scanf("%d", &n);
Feira feira[n];
float custo_total[n];
for(int i=0; i<n; i++) { //n casos de teste
    scanf("%d", &feira[i].m[i]); //m quantidade de produtos disponíveis
        for(int j=0; j<feira[i].m[i]; j++) {
            fgets("%s %f", &feira[i].produtos[j], &feira[i].preço[j]); //produtos disponíveis e seus preços
        }
        scanf("%d", &feira[i].p[i]);
        for(int j=0; j<feira[i].p[i]; j++) {
            fgets("%s %d", &feira[i].compras[j], &feira[i].qtd[j]);    
        }
        for(int j=0; j<feira[i].m[i]; j++) {
            for(int k=0; k<feira[i].p[i]; k++) {
                if(feira[i].produtos[j] == feira[i].compras[k]) {
                    custo_total[i] += feira[i].preço[k]*feira[i].qtd[k];
        }
    }
}      
    printf("R$ %.2f\n", &custo_total[i]);
}




    return 0;
}
