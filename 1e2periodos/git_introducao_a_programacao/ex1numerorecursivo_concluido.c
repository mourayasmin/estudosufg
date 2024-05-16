#include <stdio.h>

void ImprimirNumeros (int n, int count) {

if (count <= n) {
    printf("%d ", count);
    ImprimirNumeros(n, count + 1);

}

}

int main () {
int n;
scanf("%d", &n);
if ((n <= 5000)&&(n > 0)) {
ImprimirNumeros(n, 1);
}

    return 0;
}