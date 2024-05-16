#include <stdio.h>

int main () {

int testes, l; 
scanf("%d", &testes);
for(l=0; l<testes; l++) { //ler "testes" casos de teste
    int n;
    scanf("%d", &n); //ler o tamanho do vetor para o conjunto analisado
    int v[n], i=0;
    for(i=0; i<n; i++) { //ler os elementos do vetor para o conjunto analisado
        scanf("%d", &v[i]);
    }
    i=0; //atualiza o valor de "i" para não ter que criar outra variável, já que há erro com declarações dentro do "for"
    int smax=0, aux=0; //smax é o valor da soma máxima entre os elementos
    for(i=0; i<n-1; i++) { //realizar as somas possíveis
        int j;
        for(j=i+1; j<n; j++) { //limitar a fazer somas em que i<j
            int sat; 
            sat = v[i] + v[j]; //somar os elementos atuais
            if(sat > smax) {
                smax = sat; //atualizar o valor da soma máxima para estabelecer uma base
                aux = 1; //encontra uma nova soma máxima
            } 
            else if (smax == sat) { 
                aux++; //se as somas são iguais, então há um valor máximo a ser computado
            }
        }
    }
printf("%d\n", aux);
}

return 0;
}