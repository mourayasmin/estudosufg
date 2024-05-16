#include <stdio.h> 

int main () {

int n, i;
scanf("%d", &n);
int numeros[n], novos[n], original[n];
    for (i=0; i<n; i++) {
        scanf("%d", &numeros[i]);
    }

    for(i=0; i<n; i++) {
        original[i] = numeros[i];
    }

    for(i=0; i<n; i++) {
        novos[i] = (numeros[i] % 10) * 1000;
    numeros[i] /= 10;
        novos[i] += (numeros[i] % 10) * 100;
    numeros[i] /= 10;
        novos[i] += (numeros[i] % 10) * 10;
    numeros[i] /= 10;
        novos[i] += (numeros[i] % 10);
    }

    for(i=0; i<n; i++) {
        if(novos[i] == original[i]) {
            printf("yes ");
        }
    else {
        printf("no ");
        }

    }   
printf("\n");

return 0;
}
