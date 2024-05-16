#include <stdio.h> 

int main () {

int n, x, j=0, i=0;
scanf("%d", &n);
int v[n];
for(i=0; i<n; i++) { 
    scanf("%d", &v[i]);
}
x = v[n-1]; 
for(int aux=0; aux<n; aux++) {
    if(v[aux] == x) {
        j++;
    }
}
printf("Nota %d, %d vezes\n", x, j);
int maior=-1;
for(int temp=0; temp<n; temp++) {
if(v[temp] > maior) {
    maior = v[temp];
    }
}
int y=0;
for(int count=0; count<n; count++) {
    if(v[count] == maior) {
        y = count;
        break;
    }
}
printf("Nota %d, indice %d\n", maior, y);
    return 0; 
}