#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0;

    printf("Combinacoes que somam 4:\n");

    for(int i = 0; i <= 4; i++) {
        int j = 4 - i;

        printf("%d + %d = %d\n", i, j, i + j);

        soma += i + j;
    }

    printf("Soma total: %d\n", soma);

    system("pause");
    return 0;
}