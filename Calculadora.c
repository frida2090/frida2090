#include <stdio.h>

void mostrarMenu();

int main() {
    int opcion;
    float num1, num2, resultado;
    
    while (1) { 
        mostrarMenu();
        scanf("%d", &opcion);
        
        if (opcion == 5) {
            printf("El programa a finalizado\n");
            break; 
        }
        
        printf("Ingrese el primer número: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%f", &num2);
        
        switch (opcion) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Error: Ingrese un numero diferente a 0.\n");
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
    printf("3. Multiplicacion\n");
    printf("4. Dividicion\n");
    printf("5. Salir de la Calculadora\n");
    printf("Seleccione una opción: ");
}
