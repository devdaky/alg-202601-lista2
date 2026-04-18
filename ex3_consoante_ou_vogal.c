#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;
    printf("digite uma letra:");

    scanf(" %c", &letra);

    if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||
        letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')
        printf("Vogal\n");
    else
        printf("Consoante\n");

    system("pause");
    return 0;
}