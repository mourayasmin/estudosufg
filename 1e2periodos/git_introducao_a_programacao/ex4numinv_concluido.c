#include <stdio.h> 

int NumRev(int n, int reverso) {

if (n == 0) {
    return reverso;
    } 
else { 

    int digito = n%10;
    reverso = reverso*10 + digito;
    return NumRev(n/10, reverso);

    }
}

int main () {

int n;
scanf("%d", &n);

int nr = NumRev(n, 0);

printf("%d\n", nr);

return 0;
}