#include <stdio.h> 

int main () {
int p, s, i=0; 
scanf("%d %d", &p, &s);
int posicao[s], pulo[s], pedra[p];
//contador para inicializar os status das pedras como 0
for(i=0; i<p; i++) {
    pedra[i] = 0;
}
//contador para guardar as posições iniciais e pulos de cada sapo
for(i=0; i<s; i++) {
    scanf("%d %d", &posicao[i], &pulo[i]);
}
//contador para cada sapo
for(i=0; i<s; i++) {
    int posicaoatual = posicao[i]; //guardar a posicao atual para ir mudando
    //pois a posicao[i] tem que voltar ao original depois
    pedra[posicao[i] - 1] = 1; //-1 pois 
    while(posicaoatual + pulo[i] <= p) { //contador de pulos positivos
        pedra[posicaoatual + pulo[i] - 1] = 1;
        posicaoatual += pulo[i];
    }
    posicaoatual = posicao[i];
    while(posicaoatual - pulo [i] > 0) {
        pedra[posicaoatual - pulo[i] - 1] = 1;
        posicaoatual -= pulo[i];
    }
} 
for(i=0; i<p; i++) {
    printf("%d\n", pedra[i]);
}

    return 0;
}
