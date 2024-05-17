#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroGerado, palpite, tentativas = 0;
    char jogador[10];
    srand(time(NULL));
    numeroGerado = rand() % 100 + 1;
    
    printf("Digite seu Nick: \n");
    scanf("%s", jogador);

    printf("Olá %s, eu quero jogar um jogo!\n", jogador);
    printf("Você tem 5 tentativas para adivinhar o número gerado entre 1 e 100, ou morrerá!.\n");

    while (tentativas < 5) {
        printf("Tentativa #%d: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroGerado) {
            printf("Tente um número maior.\n");
        } else if (palpite > numeroGerado) {
            printf("Tente um número menor.\n");
        } else {
            printf("Parabéns! Você acertou o número em %d tentativa(s), por esse motivo ficará vivo.\n", tentativas);
            return 0;
        }
    }

    printf("Idiota, você gastou todas as suas tentativas. O número correto era %d.\n", numeroGerado);
    return 0;
}


// João Luis, Pedro Lucas Rodrigues e Matheus Rangel
