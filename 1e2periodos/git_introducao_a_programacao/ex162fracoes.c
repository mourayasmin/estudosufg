#include <stdio.h> 

typedef struct Caso{
    int qtd, x[50], y[50];
}Caso;

int main () {

int n;
scanf("%d", &n);
Caso casos[n];
for(int j=0; j<n; j++) {
    scanf("%d", &casos[j].qtd);
    for(int i=0; i<casos[i].qtd; i++) {
        scanf("%d/%d", &casos[j].x[i], &casos[j].y[i]);
    }
}
int temequivalencia=0;
for(int i=0; i<n; i++) {
    printf("Caso de teste %d\n", i+1);
        for(int j=i+1; j<n; j++) {
            if(casos[i].x[i]*casos[j].y[j] == casos[i].y[i]*casos[j].x[j]) {
                printf("%d/%d equivalente a %d/%d\n", casos[i].x[i], casos[i].y[i], casos[j].x[j], casos[j].y[j]);
            }
            else {
                printf("Nao ha fracoes equivalentes na sequencia\n");
            }
        }
}

    return 0;
}