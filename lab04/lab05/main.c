#include <stdio.h>

double somar(double a, double b) { return a + b; }
double subtrair(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) { return b != 0 ? a / b : 0; }

int main(void) {
    int opcao;
    double n1, n2, resultado;

    printf("=== CALCULADORA MODULAR ===\n");
    printf("1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\nEscolha: ");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%lf %lf", &n1, &n2);

    switch (opcao) {
        case 1: resultado = somar(n1, n2); break;
        case 2: resultado = subtrair(n1, n2); break;
        case 3: resultado = multiplicar(n1, n2); break;
        case 4: 
            if (n2 == 0) {
                printf("Erro: Divisao por zero!\n");
                return 1;
            }
            resultado = dividir(n1, n2); 
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
