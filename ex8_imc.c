#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Peso lido: %.2f\n", peso);
    printf("Altura lida: %.2f\n", altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    system("pause");
    return 0;
}