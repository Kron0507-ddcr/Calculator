#include <stdio.h>

float addNumbers(float a, float b);
float lessNumbers(float a, float b);
float multiplyNumbers(float a, float b);
float divideNumbers(float a, float b);
void setNumbers(float *a, float *b);
void menu();

int main()
{
    //Llamada a la funcion menu
    menu();
    return 0;
}

void menu()
{
    float a = 0.0, b = 0.0;
    int option = 0;
    printf("Welcome to the calculator program!");
    printf(" 1. Add\n 2. Less\n 3. Multiply\n 4. Divide\n 5. Exit\n > Select an option: ");
    scanf("%d", &option);
    setNumbers(&a, &b);
    // El ciclo se repite hasta que el usuario seleccione la opción 5 (salir)
    do {
        switch (option) {   
            case 1:
                printf(" Result: %.2f ", addNumbers(a, b));
                break;
            case 2:
                printf(" Result: %.2f ", lessNumbers(a, b));
                break;
            case 3:
                printf(" Result: %.2f ", multiplyNumbers(a, b));
                break;
            case 4:
                printf(" Result: %.2f ", divideNumbers(a, b));
                break;
            case 5:
                printf(" Exit");
                break;
            default:
                printf(" Invalid option");
                break;
        }
    } while(option != 5);

    printf("\n");
    getchar();

}

void setNumbers(float *a, float *b)
{
    printf(" Enter the first number: ");
    scanf("%f", a);
    printf(" Enter the second number: ");
    scanf("%f", b);
}

float addNumbers(float a, float b) {
    return a + b;
}

float lessNumbers(float a, float b) {
    return a - b;
}

float multiplyNumbers(float a, float b) {
    return a * b;
}

float divideNumbers(float a, float b) {
    return a / b;
}