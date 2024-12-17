#include <stdio.h>

void convertTemp();
void convertTempo();
float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParaKelvin(float c);
float segundosParaMinutos(int s);
float minutosParaHoras(int m);

int main() {
    int op;

    do {
        printf("\n---------------- Conversor de Medidas ----------------\n");
        printf("1. Conversor de Temperatura\n");
        printf("2. Conversor de Tempo\n");
        printf("0. Sair\n");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            convertTemp();
            break;
        case 2:
            convertTempo();
            break;
        
        case 0:
            printf("Saindo...");
            break;
        default:
            printf("opcao invalida!");
            break;
        }
    } while (op != 0);

    return 0;
}

void convertTemp() {
    int opcao;
    float temp, resultado;

    printf("\n ----------------Conversor de Temperatura----------------\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o valor em Celsius: ");
        scanf("%f", &temp);
        resultado = celsiusParaFahrenheit(temp);
        printf("%.2f Celsius = %.2f Fahrenheit\n",temp,resultado);
        break;
    case 2:
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f", &temp);
        resultado = fahrenheitParaCelsius(temp);
        printf("%.2f Fahrenheit = %.2f Celsius",temp,resultado);
        break;
    case 3:
        printf("Digite o valor em Celsius: ");
        scanf("%f", &temp);
        resultado = celsiusParaKelvin(temp);
        printf("%.2f Celsius = %.2f Kelvin");
        break;
    default:
        printf("Opcao Invalida!");
        break;
    }
}

void convertTempo() {

}

float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

// Funções de Conversão de Tempo
float segundosParaMinutos(int s) {
    return s / 60.0;
}

float minutosParaHoras(int m) {
    return m / 60.0;
}