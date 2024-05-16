#include <stdio.h>

void NumBin(int num) {
    if (num > 0) {
        NumBin(num / 2);
        printf("%d", num % 2);
    }
}

int main() {
    int n, i, num;
    scanf("%d", &n); 

    for (i = 0; i < n; i++) {
        scanf("%d", &num); 
        NumBin(num);
        printf("\n");
    }

    return 0;
}
