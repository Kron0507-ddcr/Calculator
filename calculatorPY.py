def addNums(num1, num2):
    return num1 + num2;

def lessNums(num1, num2):
    return num1 - num2;

def multNums(num1, num2):
    return num1 * num2;

def divNums(num1, num2):
    return num1 / num2;

def main():
    print("Welcome to the calculator program!");
    print(" 1. Add\n 2. Less\n 3. Multiply\n 4. Divide\n 5. Exit\n > Select an option: ");
    # En este caso, el input es un string, por lo que hay que convertirlo a int 
    # Esto se logra con la función int() y dentro de los paréntesis se pone el string a convertir
    option = int(input());
    print("Enter the first number: ");
    num1 = int(input());
    print("Enter the second number: ");
    num2 = int(input());

    # El ciclo while se ejecuta mientras la condición sea verdadera, en este caso, mientras option sea diferente de 5
    while option != 5:
        # En python, no se usa el switch, sino que se usa el if y elif
        if option == 1:
            print("The result is: ", addNums(num1, num2));
        elif option == 2:
            print("The result is: ", lessNums(num1, num2));
        elif option == 3:
            print("The result is: ", multNums(num1, num2));
        elif option == 4:
            print("The result is: ", divNums(num1, num2));
        else:
            print("Invalid option!");


# Llama a la función main
if __name__ == "__main__":
    main();