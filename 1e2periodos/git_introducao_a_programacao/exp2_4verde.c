#include <stdio.h> 
int main () {
int a, b, anos=0;
double taxaa=1.04, taxab=1.021;
scanf("%d", &a);
scanf("%d", &b);
while (b >= a) {
    a = a*taxaa;
    b = b*taxab;
    anos ++;
}
printf("ANOS = %d", anos);

return 0;


}



