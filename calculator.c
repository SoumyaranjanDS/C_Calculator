#include<stdio.h>

int main() {
    float num1, num2, result;
    char oper;

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number : ");
    scanf("%f", &num2);

    printf("Choose your operator +, -, *, /, %% : ");
    scanf(" %c", &oper);

    int check = 1;

    if(oper == '+') {
        result = num1 + num2;
    }
    else if(oper == '-') {
        result = num1 - num2;
    }
    else if(oper == '*') {
        result = num1 * num2;
    }
    else if(oper == '/') {
        if(num2 != 0) {
        result = num1 / num2;
        }
        else {
            printf("Division with 0 is not allowed");
            check = 0;
        }
    }
    else if(oper == '%'){
        if(num2 != 0) {
        result = (int)num1 % (int)num2;
        }
        else {
            printf("Modulos with 0 is not allowed");
            check = 0;
        }
    }
    else {
        printf("Enter a valid operator");
    }
    if(check != 0) {
    printf("Result : %.2f", result);
    }
    return 0;
}