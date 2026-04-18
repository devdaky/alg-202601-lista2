#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, tentativa, count = 0;

    printf("Digite o numero secreto: ");
    scanf("%d", &num);

    do {
        printf("Digite um numero: ");
        scanf("%d", &tentativa);
        count++;

        if(tentativa > num) {
            if(tentativa - num <= 10)
                printf("Voce passou, mas esta perto\n");
            else
                printf("Voce passou, esta longe\n");
        }
        else if(tentativa < num) {
            if(num - tentativa <= 10)
                printf("Ainda nao chegou, mas esta perto\n");
            else
                printf("Ainda nao chegou, esta longe\n");
        }

    } while(tentativa != num);

    printf("Acertou em %d tentativas\n", count);

    system("pause");
    return 0;
}