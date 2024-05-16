#include <stdio.h>

int main () {
int n, i=0;
scanf("%d", &n);
for (i=0; i<=n; i++) {
    if(n%2 == 0) {
        printf("%d", n*2);
        i++;
        n = n/32;
    }
else if (n%2 != 0) {
        printf("%d", n*3);
        i++;
        n = n/32;
    }
}

    return 0;
}

