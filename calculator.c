#include <stdio.h>
#include <string.h>

int main() {

    float num1, num2, result;    // store the two numbers and the result
    char opr;                    // to store operator like + - * / %
    char conf[10];               // to store "yes" or "no"
    int choice = 0;              // flag variable for invalid input

    strcpy(conf, "yes");         // start with yes so the loop runs first time

    printf("---- Simple C Calculator ----\n");

    // loop continues as long as user types yes
    while(strcmp(conf, "yes") == 0 || strcmp(conf, "YES") == 0) {

        // take first number
        printf("\nEnter first number : ");
        scanf("%f", &num1);

        // take second number
        printf("Enter second number : ");
        scanf("%f", &num2);

        // take operator
        printf("Enter operator (+, -, *, /, %%) : ");
        scanf(" %c", &opr);   // space before %c to ignore newline

        // reset choice for every new calculation
        choice = 0;

        // perform calculation based on operator
        if(opr == '+') {
            result = num1 + num2;
        }
        else if(opr == '-') {
            result = num1 - num2;
        }
        else if(opr == '*') {
            result = num1 * num2;
        }
        else if(opr == '/') {
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: cannot divide by zero.\n");
                choice = 1;
            }
        }
        else if(opr == '%') {
            if((int)num2 != 0) {
                result = (int)num1 % (int)num2;
            } else {
                printf("Error: cannot take modulus by zero.\n");
                choice = 1;
            }
        }
        else {
            printf("Invalid operator entered.\n");
            choice = 1;
        }

        // only print result if everything went fine
        if(!choice) {
            printf("Result = %.2f\n", result);
        }

        // ask again if user wants to continue
        printf("\nDo you want to continue (yes / no) : ");
        scanf("%s", conf);
    }

    // exit message
    printf("\nThank you for using this calculator.\n");
    printf("Program ended successfully.\n");

    return 0;
}
