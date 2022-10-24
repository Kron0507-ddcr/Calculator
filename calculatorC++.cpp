#include <iostream>

using namespace std;

float addNumbers(float a, float b);
float lessNumbers(float a, float b);
float multiplyNumbers(float a, float b);
float divideNumbers(float a, float b);
void setNumbers(float *a, float *b);
void menu();

int main()
{
    // Llamamos a la función menu
    menu();
    return 0;
}

void menu()
{
    float a = 0.0, b = 0.0;
    int option = 0;
    cout << "Welcome to the calculator program!";
    cout << " 1. Add\n 2. Less\n 3. Multiply\n 4. Divide\n 5. Exit\n > Select an option: ";
    cin >> option;
    setNumbers(&a, &b);
    // El ciclo se repite hasta que el usuario seleccione la opción 5 (salir)
    do {
        switch (option) {   
            case 1:
                cout <<" Result: " << addNumbers(a, b);
                break;
            case 2:
                cout <<" Result: " << lessNumbers(a, b);
                break;
            case 3:
                cout <<" Result: " << multiplyNumbers(a, b);
                break;
            case 4:
                cout <<" Result: " << divideNumbers(a, b);
                break;
            case 5:
                cout <<" Exit";
                break;
            default:
                cout <<" Invalid option";
                break;
        }
    } while (option != 5);
    cout <<"\n";
    getchar();

}

void setNumbers(float *a, float *b)
{
    cout <<" Enter the first number: ";
    cin >> *a;
    cout <<" Enter the second number: ";
    cin >> *b;
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