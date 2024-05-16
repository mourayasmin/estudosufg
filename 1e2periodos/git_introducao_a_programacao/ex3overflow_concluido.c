#include <stdio.h>

int main () {

int max, n1, n2, res;
char sym;

scanf("%d", &max);
scanf("%d %c %d", &n1, &sym, &n2);

if (sym == 'x') {
    res = n1*n2;
}
else {
    res = n1 + n2;
} 

if (res > max) {
    printf("overflow\n");
}
else {
    printf("no overflow\n");
}

    return 0;
}