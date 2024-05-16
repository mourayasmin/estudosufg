#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Universidade {
    int cod1;
    float vcred;
    char nomecurso[100];
}Universidade;

typedef struct Registros {
    char nomealuno[500];
    int cod2, credito;
} Registros;

void DescobrirCurso (int cod1, Universidade universidades[], int n) {
    for(int i=0; i<n; i++) {
        if(universidades[i].cod1 == cod1) {
            printf("%s", universidades[i].nomecurso);
            return;
        }
    }
}

int main() {

int n, m;
scanf("%d", &n);

Universidade universidades[n];

for(int i=0; i<n; i++) {
    scanf("%d", &universidades[i].cod1);
    scanf("%f", &universidades[i].vcred);
    scanf("%100s", universidades[i].nomecurso);
}

scanf("%d", &m);

Registros alunos[m];

for(int i=0; i<m; i++) {
    scanf("%s", alunos[i].nomealuno);
    scanf("%d", &alunos[i].cod2);
    scanf("%d", &alunos[i].credito);
}


for(int i=0; i<m; i++) {
    printf("Aluno(a): %s Curso: ", alunos[i].nomealuno);
    DescobrirCurso(alunos[i].cod2, universidades, n);
    printf(" Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", alunos[i].credito, universidades[alunos[i].cod2].vcred, alunos[i].credito * universidades[alunos[i].cod2].vcred);
}


return 0;
}