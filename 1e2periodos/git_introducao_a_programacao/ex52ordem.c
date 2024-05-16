#include <stdio.h> 

void ordenar(int v[], int n) { //copia os parâmetros do vetor e de "n"
    int i, j, count;
    for(i=0; i<n-1; i++) { //contador para "n-1" vezes, pois serão feitas, no máximo, "n-1" trocas de posição; vai de 0 a 9 
        for(j=0; j<n-i-1; j++) { /*contador para "n-i-1" vezes; vai de 1 a 10; poderia comparar "n-1" vezes, e daria certo, mas "n-i-1" funciona como uma otimização
         para que o programa não precise comparar todos os elementos, já que já está alocando os maiores nas últimas posições do vetor*/
            if(v[j]>v[j+1]) { //se o valor na posição "j" for maior do que na posição "j+1", significa que está fora de ordem, então trocam-se as posições
                count = v[j]; //utiliza-se o count para guardar, temporariamente, o valor na posição "j"
                v[j] = v[j+1]; //coloca v[j] no lugar de v[j+1]
                v[j+1] = count; //guarda count (que guarda v[j]) em v[j+1], ou seja, coloca v[j+1] no lugar de v[j]
            }
        }
    }
}

int main () {

int n;
scanf("%d", &n);
int v[n];
for(int i=0; i<n; i++) {
    scanf("%d", &v[i]); //alocação de cada elemento para dentro do vetor
}
ordenar(v, n);

for(int i=0; i<n; i++) {
    printf("%d\n", v[i]); //impressão dos elementos em ordem crescente, pois foram alocados assim pela função "ordenar"
}


    return 0;
}