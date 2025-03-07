#include <stdio.h>

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

void mostrarMenu();

int main() {
    int opcion;
    float num1, num2, resultado;
    
    while (1) { 
        mostrarMenu();
        scanf("%d", &opcion);
        
        if (opcion == 5) {
            printf("El programa ha finalizado\n");
            break; 
        }
        
        printf("Ingrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);
        
        switch (opcion) {
            case 1:
                resultado = suma(num1, num2);
                printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = resta(num1, num2);
                printf("La resta de %.2f y %.2f es: %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = multiplicacion(num1, num2);
                printf("La multiplicación de %.2f y %.2f es: %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Error: Ingrese un número diferente a 0.\n");
                }
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    }
    
    return 0;
}

void mostrarMenu() {
    printf("\n*** Calculadora Básica ***\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Salir de la Calculadora\n");
    printf("Seleccione una opción: ");
}
