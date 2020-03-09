#include <stdio.h>
#include <math.h>
//CALCULA AS RAIZES DE UMA EQ. DO SEGUNDO GRAU
int main (){

    double a, b, c, delta, raiz_1, raiz_2;
    scanf("%lf%lf%lf", &a, &b, &c);

    delta = (b * b) - (4 * a *c);

    if (a != 0 && delta >= 0){
        raiz_1 = ((-b) + sqrt(delta)) / (2 * a);
        raiz_2 = ((-b) - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", raiz_1);
        printf("R2 = %.5lf\n", raiz_2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return (0);
}
