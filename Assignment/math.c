#include "math.h" // Include the header


int math(int num1, int num2, char Operator) // define the function
{
    if (Operator == '+'){
        return num1 + num2; // returns num1 plus num2
    }

    else if (Operator == '-'){
        return num1 - num2; // returns num1 minus num2
    }

    else if (Operator == '/'){
        return num1 / num2; // returns num1 divided by num2
    }

    else if (Operator == '*'){
        return num1 * num2; // returns num1 multiplied by num2
    }

    else if (Operator == '%'){
        return num1 % num2; // returns num 1 modulus num2
    }

    else if (Operator == '<'){
        return num1 << num2; // returns num1 shifted left by the amount num2
    }

    else if (Operator == '>'){
        return num1 >> num2; // returns num1 shifted right by the amount num2
    }

    else if (Operator == '&'){
        return num1 & num2; // returns num1 bitwise ANDed with num2
    }

    else if (Operator == '|'){
        return num1 | num2; // returns num1 bitwise ORed with num2
    }

    else if (Operator == '^'){
        return num1 ^ num2; // returns num1 bitwise XORed with num2
    }

    else if (Operator == '~')
        return num2 = ~num1; // returns num2 assigned the bitwise inversed value of num1

    else {
        return printf("Please use a valid operator."); // returns an error message if an invalid operator is used
    }
}
