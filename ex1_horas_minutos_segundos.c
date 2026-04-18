#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, h, m, s;
printf("digite os segundos:");
    scanf("%d", &total);

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("%d h %d min %d s\n", h, m, s);

    system("pause");
    return 0;
}