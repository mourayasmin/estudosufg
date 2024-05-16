#include <stdio.h>
int main () {
int n, i, cont=0;
scanf("%d", &n);
printf("%d = ", n);
for (i=1; i<=n/2; i++) {
    if(n%i == 0) {
        printf("%d", i);
        cont = cont + i; 
    }
    if (cont < n) {
        printf(" + ");
    }
}
if (cont == n) {
    printf(" = %d (NUMERO PERFEITO)\n", n);
} else {
    printf(" = %d (NUMERO NAO E PERFEITO)\n", n);
}
    return 0;
}