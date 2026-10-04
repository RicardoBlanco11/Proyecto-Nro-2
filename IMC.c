#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Su IMC es: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Clasificacion: Bajo peso\n");
    } 
    else if (imc < 25) {
        printf("Clasificacion: Peso normal\n");
    } 
    else if (imc < 30) {
        printf("Clasificacion: Sobrepeso\n");
    } 
    else {
        printf("Clasificacion: Obesidad\n");
    }

    return 0;
}