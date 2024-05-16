#include <stdio.h> 

int main () {

int n, i, j, flag = 1;
scanf("%d", &n);
int v[n];

for(i=0; i<n; i++) {
    scanf("%d", &v[i]);
}
for(i=0; i<n; i++) {
    for(j=2; j<v[i]; j++) {
        if(v[i]%j == 0) {
            printf("composto\n");
            flag = 0;
            break;
        }

    }
    if (flag == 1) {
        printf("primo\n");
    }
    flag = 1;

}

    return 0;
}