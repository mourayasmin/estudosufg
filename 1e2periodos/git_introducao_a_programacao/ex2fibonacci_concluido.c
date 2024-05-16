#include <stdio.h>


int NumerosFibonacci (int n) {

    if (n <= 1) {
        return n;
    } else {
        return NumerosFibonacci(n-1) + NumerosFibonacci(n - 2);
    }

}

void FibonacciRecursivo (int n, int count) {
    if (count <= n) {
        printf("%d ", NumerosFibonacci(count));
        FibonacciRecursivo(n, count + 1);
    }
}


int main () {

    int n;
    scanf("%d", &n);
    if ((n >= 0)&&(n <= 1000)) {
    FibonacciRecursivo(n, 0);
    }
return 0;
}