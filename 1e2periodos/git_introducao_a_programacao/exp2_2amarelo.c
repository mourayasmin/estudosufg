#include <stdio.h>
int main () {
int n, divisor=1;
scanf("%d", &n);
printf("%d = ", n);
while (n%divisor < n) {
    if (n%divisor == 0) {
    printf("%d + ", divisor);
    divisor++;
    }
}
if (divisor == n) {
    printf("= %d (NUMERO PERFEITO)\n", n);
} else {
    printf("= %d (NUMERO NAO E PERFEITO)\n", n);
}
    return 0;
}