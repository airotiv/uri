#include <stdio.h>

int main (){

    float nota_1, nota_2, nota_3, nota_4, media, nota_exame, media_final;

    scanf("%f%f%f%f", &nota_1, &nota_2, &nota_3, &nota_4);

    media = (2 * nota_1 + 3 * nota_2 + 4 * nota_3 + nota_4) / 10;
    printf("Media: %.1f\n", media);

    if (media >= 7)
        printf("Aluno aprovado.\n");
    if (media < 5)
        printf("Aluno reprovado.\n");
    if (media >= 5 && media < 7){
        printf("Aluno em exame.\n");
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        media_final = (nota_exame + media) / 2;
        if (media_final >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }


    return(0);
}
