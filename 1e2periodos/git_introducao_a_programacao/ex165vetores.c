#include <stdio.h>
#include <math.h>
typedef struct vetor{
    float u, x, y, z, norma;
}vetor;

void calcularnorma(vetor vetores[], int n) {
    for(int i = 0; i<n; i++) {
        vetores[i].norma = sqrt((vetores[i].u*vetores[i].u + vetores[i].x*vetores[i].x + vetores[i].y*vetores[i].y + vetores[i].z*vetores[i].z));
    }

}

void ordenaNorma(vetor vetores[], int n) {
    vetor temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetores[j].norma > vetores[j + 1].norma) {
                temp = vetores[j];
                vetores[j] = vetores[j + 1];
                vetores[j + 1] = temp;
            }
        }
    }
}

int main () {

int n;
scanf("%d", &n);
vetor vetores[n];

for(int i=0; i<n; i++) {
    scanf("%f %f %f %f", &vetores[i].u, &vetores[i].x, &vetores[i].y, &vetores[i].z);
}

calcularnorma(vetores, n);

ordenaNorma(vetores, n);

for(int i=0; i<n; i++) {
    printf("Vetor:  (%.2f, %.2f, %.2f, %.2f) Norma: %.2f\n", vetores[i].u, vetores[i].x, vetores[i].y, vetores[i].z, vetores[i].norma);
}


    return 0;
}