#include <stdio.h>
//Usuário fornece a hora inicial e a hora final do jogo e o programa imprime a duração do jogo.
int main (){

    int hora_i, hora_f;

    scanf("%d%d", &hora_i, &hora_f);

    if (hora_i == hora_f){
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }
    else{
        if (hora_i > 12 && hora_f < 12){
        printf("O JOGO DUROU %d HORA(S)\n", (24 - hora_i) + hora_f);
        }
        else{
            if (hora_i < 12 && hora_f > 12){
                printf("O JOGO DUROU %d HORA(S)\n", hora_f - hora_i);
            }
        }
    }


    return 0;
}
