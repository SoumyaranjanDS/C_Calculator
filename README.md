C CALCULATOR

This is a small calculator project written in C language.
It takes two numbers and an operator from the user and performs operations like addition, subtraction, multiplication, division and modulus.
The program keeps running until the user types "no" when asked to continue.

ABOUT THE CODE

Using strings instead of single characters
This calculator uses "yes" and "no" instead of single letters like y or n.
To compare two strings in C, strcmp() function is used from string.h library.

Example:
```
#include <string.h>

while(strcmp(conf, "yes") == 0 || strcmp(conf, "YES") == 0) {
    // code runs until user types no
}
```

strcmp() checks if the entered string matches "yes" or "YES".
If it matches, the loop continues.

String copying to initialize a variable
Since strings cannot be assigned directly in C, strcpy() is used to copy a string into another variable.

Example:
```
char conf[10];
strcpy(conf, "yes");    // this makes sure the loop runs for the first time
```

Taking user input
The program takes two numbers and one operator each time from the user.

Example:
```
printf("Enter first number : ");
scanf("%f", &num1);

printf("Enter second number : ");
scanf("%f", &num2);

printf("Enter operator (+, -, *, /, %%) : ");
scanf(" %c", &opr);
```

The space before %c is used to ignore any leftover newline characters from previous input.

Performing arithmetic operations
The program checks which operator is entered and performs that operation using if else statements.

Example:
```
if(opr == '+') {
    result = num1 + num2;
}
else if(opr == '-') {
    result = num1 - num2;
}
else if(opr == '*') {
    result = num1 * num2;
}
```

Handling division or modulus by zero
The program checks if the second number is zero before performing division or modulus to avoid errors.

Example:
```
else if(opr == '/') {
    if(num2 != 0) {
        result = num1 / num2;
    } else {
        printf("Error: cannot divide by zero.\n");
    }
}
```

Looping the calculator
After each calculation, it asks whether the user wants to continue or not.
If user types "yes" it repeats, otherwise it stops.

Example:
```
printf("Do you want to continue (yes / no) : ");
scanf("%s", conf);

EXAMPLE OUTPUT
---- Simple C Calculator ----
Enter first number : 10  
Enter second number : 5  
Enter operator (+, -, *, /, %) : *  
Result = 50.00  

Do you want to continue (yes / no) : yes  
Enter first number : 15  
Enter second number : 0  
Enter operator (+, -, *, /, %) : /  
Error: cannot divide by zero.  

Do you want to continue (yes / no) : no  
Thank you for using this calculator.  
```
SUMMARY

This calculator is useful to understand

how strings work in C using strcmp and strcpy

how to take user input using scanf

how to handle errors like divide by zero

how to use loops and conditions in C

It is a beginner friendly program written in a simple way to help understand the basics of C programming.
