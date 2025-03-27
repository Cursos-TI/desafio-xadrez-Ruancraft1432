#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>
//Recursividade
//Recursividade Torre
void Torre(int T){
    if(T > 0){
        printf("Direita\n");
        Torre(T - 1);
    }
}
//Recursividade Raniha
void Rainha(int R){
    if(R > 0){
        printf("Esquerda\n");
        Rainha(R - 1);
    }
}
//Recursividade Bispo
void Bispo(int B){
    if(B > 0){
        for(int Bi = 0; Bi < 1; Bi++){
            printf("Direita\n");
        }
        printf("Cima\n");
        Bispo(B - 1);
    }
}

int main() {
    //Recursividade Torre
    printf("\n");
    printf("Torre:\n");
    Torre(5);

    //Recursividade Raniha
    printf("\n");
    printf("Rainha:\n");
    Rainha(8);

    //Recursividade Bispo
    printf("\n");
    printf("Bispo:\n");
    Bispo(5);

    //Loop do Cavalo
    printf("\n");
    printf("Cavalo:\n");
    int C = 1;//Número Horizontal
    while(C--){
        for (int Ca = 0; Ca < 5; Ca++){ //Número Vertical
            if(Ca > 1)break; //Quantidade que Precisa
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}