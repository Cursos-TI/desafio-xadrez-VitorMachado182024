#include <stdio.h>

int main(){
    int i;

    printf("\nMovimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d Direita\n", i);
    }

    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("%d Cima, Direita\n", i);
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("%d Esquerda\n", i);
        i++;
    } while (i <= 8);

    printf("\nMovimento do cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("%d Baixo\n", i);
    }
    int j = 1;
    while (j < 2) {
        printf("%d Esquerda\n", j);
        j++;
    }
    printf("\n");
    return 0;
}