#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanho, velocidade, tempo;
    printf("digite o tamanho do arquivo em MB:");
    scanf("%f", &tamanho);
 
    printf("digite a velocidade da internet em Mbps:");
    scanf("%f", &velocidade);
    

    tempo = (tamanho * 8) / velocidade;
    tempo /= 60;

    printf("Tempo: %.2f minutos\n", tempo);

    system("pause");
    return 0;
}