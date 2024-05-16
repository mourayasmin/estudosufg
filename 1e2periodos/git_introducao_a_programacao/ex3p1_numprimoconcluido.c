#include <stdio.h>

//função para verificar se um número é primo

int FunPrimo(int num) {
    int flag = 1;
    if (num<=1) {
        return 0;
    } else {
        int i;
        for (i=2; i<=num/2; i++) {
            if (num%i == 0) {
                flag = 0;
                return 0;
            }
        }
    }
    return 1;
}


//função para ordenar o vetor de números primos

void FunOrd(int primos[], int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(primos[j] > primos[j+1]) {
                temp = primos[j];
                primos[j] = primos[j+1];
                primos[j+1] = temp;
            }
        }
    }

}
int main () {

int n, i;
scanf("%d", &n); //n é o número de ordens a serem lidas
int v[n], primos[n], aux=0, soma=0; // v[n] guarda as ordens, primos[n] guarda os números primos, aux serve como contador, soma é a soma final da saída

for(i=1; i<=n; i++) { 
    scanf("%d", &v[i]); 
}
int ordem, num;
//computar corretamente os números primos às suas ordens
for(i=1; i<=n; i++) { //começa em 1, de acordo com as ordens
    ordem = v[i];
    num = 2; //o primeiro número primo é 2

    while(ordem > 0) { //checa até a primeira ordem 

        if(FunPrimo(num)) { 
            ordem--;
            if(ordem == 0) { //número primo da ordem atual
                    primos[aux++] = num; //armazena o número primo
                    soma += num; //soma os primos dentro de "soma"
            }
        }
        num++; //verificar o próximo número
    }
}

//chama a função de ordenar os números primos
FunOrd(primos, aux);

//imprime os números primos em ordem ascendente

for(i=0; i<aux; i++) {
    printf("%d ", primos[i]);
}
printf("\n%d\n", soma); //imprimir a soma final


    return 0;
}