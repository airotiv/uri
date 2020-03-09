#include <stdio.h>

int main() {
    int hora_inicial, min_inicial, hora_final, min_final;
    int inicio, fim;

    /*Recebe as entradas*/
    scanf("%d", &hora_inicial);
    scanf("%d", &min_inicial);
    scanf("%d", &hora_final);
    scanf("%d", &min_final);

    inicio = (hora_inicial * 60 + min_inicial); //inicio armazena o momento inicial em minutos
    fim = (hora_final * 60 + min_final); //fim armazena o momento final em minutos

    if (inicio == fim) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        if (inicio < fim) {
            /*Transforma a diferenca entre o inicio e o fim em horas e minutos*/
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (fim-inicio)/60, (fim-inicio)%60 );
        } else { //caso em que o inicio > fim 
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (fim-inicio+1440)/60, (fim-inicio+1440)%60 );
        }
    }

    return 0;

}