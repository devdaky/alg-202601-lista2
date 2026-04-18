#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d! = ", n);

    for(int i = n; i >= 1; i--) {
        printf("%d", i);

        if(i > 1) {
            printf(" x ");
        }

        fat *= i;
    }

    printf(" = %lld\n", fat);

    system("pause");
    return 0;
}