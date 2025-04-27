#include <stdio.h>

void moverTorre(int casa) {
    if (casa > 1)
        moverTorre(casa - 1);
        printf("%d Direita\n", casa);
        printf("\n");
}

void moverRainha(int casa) {
    if (casa > 1) 
        moverRainha(casa - 1); 
        printf("%d Esquerda\n", casa);
        printf("\n");
}

void moverBispo() {
    for (int i = 1; i <= 5; i++) {          
        for (int j = 1; j <= 5; j++) {      
            if (i == j) {                   
                printf("%d Cima\n", i);
                printf("%d Direita\n", j);
                printf("\n");
            }
        }
    }
}

void moverCavalo() {
    for (int i = 1; i < 2; i++) {
        for (int j = 1; j < 2; j++) {
            printf("%d Cima\n", i);
            printf("%d Cima\n", i + 1);             
            printf("%d Direita\n", j);
        }       
    }   printf("\n");
}

int main() {
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo();

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}