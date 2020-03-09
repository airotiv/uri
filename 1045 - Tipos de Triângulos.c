#include <stdio.h>

int main (){

    double maior, meio, menor, a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a > b){
        if (b > c){
            maior = a;
            meio = b;
            menor = c;
        }
        else{
            if (a > c){
                maior = a;
                meio = c;
                menor = b;
            }
            else{
                maior = c;
                meio = a;
                menor = b;
            }
        }
    }
    else{
        if (a > c){
            maior = b;
            meio = a;
            menor = c;
        }
        else{
            if (b > c){
                maior = b;
                meio = c;
                menor = a;
            }
            else{
                maior = c;
                meio = b;
                menor = a;
            }
        }
    }

    a = maior;
    b = meio;
    c = menor;

    if (a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (a * a == b * b + c * c){
            printf("TRIANGULO RETANGULO\n");
        }
        else{
            if (a * a > b * b + c * c){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            else{
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        }
        else {
            if (a == b || a == c || b == c){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }
    return (0);
}
