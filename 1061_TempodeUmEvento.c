#include <stdio.h>

int main() {

    int dia_i, hora_i, min_i, seg_i;
    int dia_f, hora_f, min_f, seg_f;
    int inicio, fim, duracao;
    
    scanf("Dia %d", &dia_i);
    scanf("%d : %d : %d", &hora_i, &min_i, &seg_i);

    fflush(stdin);
    
    scanf("Dia %d", &dia_f);
    scanf("%d : %d : %d", &hora_f, &min_f, &seg_f);

    /*Calcula o tempo total em segundos*/
    inicio = (dia_i * 86400 + hora_i * 3600 + min_i * 60 + seg_i); //inicio armazena o momento inicial em minutos
    fim = (dia_f * 86400 + hora_f * 3600 + min_f * 60 + seg_f); //fim armazena o momento final em minutos
    duracao = fim - inicio;

    /*Imprime a saida*/
    printf("%d dia(s)\n", duracao/86400);
    printf("%d hora(s)\n", (duracao%86400)/3600);
    printf("%d minuto(s)\n", ((duracao%86400)%3600)/60);
    printf("%d segundo(s)\n", ((duracao%86400)%3600)%60); 

    return 0;
}