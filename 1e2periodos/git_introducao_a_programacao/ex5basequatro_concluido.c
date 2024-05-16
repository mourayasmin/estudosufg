#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int v[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    void Conversao(int numero) {
        if (numero > 0) {
         Conversao(numero / 4);
            int resto = numero % 4;
            if (resto == 0) {
                printf("A");
            } else if (resto == 1) {
                printf("C");
            } else if (resto == 2) {
                printf("G");
            } else if (resto == 3) {
                printf("T");
            }
        }
    }

    for (i = 0; i < n; i++) {
     Conversao(v[i]);
        printf("\n");
    }

    return 0;
}
