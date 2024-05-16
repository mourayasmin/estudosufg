//raciocínio: contar a frequência por número e comparar depois; guarda o primeiro, compara com o segundo, guarda o segundo, compara com o terceiro, etc
#include <stdio.h>

int main () {
    int n;
    //ler a quantidade de números
    scanf("%d", &n);
    int v[n];
    //armazenar os números no vetor
    for(int i=0; i<n; i++) {
        scanf("%d", &v[i]);
    }
    int maiorfreq=-1, count=0, j, nmaiorfreq;
    for (int i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if (v[i] == v[j]) {
            count++;
        }
        }
        if(count > maiorfreq) {
            nmaiorfreq = v[i];
            maiorfreq = count;
        }
        count=0;
    }
  
    printf("%d\n", nmaiorfreq);
    printf("%d\n", maiorfreq);


return 0;
}