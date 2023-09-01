# Introduction of C Programming

### C is middle level programming language which can directly control hardware or system. It's a compiled language.

## Basic C Program:

```c
// header file
#include <stdio.h>

// main programmer function
void main()
{
    // function block all statement here
    printf("Hello World!");
}
```

## Output:

- In C there is a built in function to see output in console: printf()

```c
#include <stdio.h>

void main()
{
    printf("Hello World!");
}
```

## Comment:

- Single Line:

```c
#include <stdio.h>

void main()
{
    // this is single line comment
}
```

- Multiline Line:

```c
#include <stdio.h>

void main()
{
    /* This is Multiline Comment
        This is Multiline Comment
        This is Multiline Comment */
}
```

## DataTypes:

### Datatype- how kind of data are used in program

### Format Specifier- Specify the data type

- char: character - %c
- int: integer number - %d
- float: float number (decimal number of 4 byte) - %f
- double: double (decimal number of 8 byte) - lf
- boolean: boolean {1 (true) or 0 (false)}
- void: nothing

## variable:

### Variable means name of memory address where data is stored.

- Structure of declaring variable and assigning

```c
// single line (declare and assign)
datatype variableName = value;

// multiline (fist assign and then declare)
datatype variableName ;
variableName = value ;

// same datatype multi variable (assign all in first line then assign one one)
datatype variable1, variable2, variable3;
```

- Single Line Variable declare and assign

```c
#include <stdio.h>

void main()
{
    int age = 10;
    printf("The age is %d", age);
}
```

- Multiline Variable declare and assign

```c
#include <stdio.h>

void main()
{
    int age;
    age = 10;
    printf("The age is %d", age);
}
```

- same datatype multi variable (assign all in first line then assign one one)

```c
#include <stdio.h>

void main()
{
    int age, year;
    age = 10;
    year = 2023;
    printf("The age is %d \n", age); // here \n is used for take a line break
    printf("The year is %d", year);
}
```

## Input in C:

- scanf() function is used to take input from console

```c
#include <stdio.h>

void main()
{
    int age;
    printf("What is your age?: ");
    scanf("%d", &age); // here & used to indicate memory location of age
    printf("Your age is %d", age);
}
```

## Operators:

- Arithmetic Operators:
- Assignment Operators
- Relational or Compositional Operators
- Logical Operators

### Arithmetic Operators:

```
- Addition : +
- Subtract: -
- Multiplication: *
- Divide: /
- Modulus: %
```

```c
#include <stdio.h>

void main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    // Addition
    int addition = num1 + num2;
    printf("Addition: %d \n", addition);

    // Subtraction
    int deference = num1 - num2;
    printf("Subtraction: %d \n", deference);

    // Multiplication
    int multiplication = num1 * num2;
    printf("Multiplication: %d \n", multiplication);

    // Division
    int division = num1 / num2;
    printf("Division: %d \n", division);

    // Modulus
    int modulus = num1 % num2;
    printf("Modulus: %d \n", modulus);
}
```

### Assignment Operators:

```
- Assign : =
- Assign and Addition: +=
- Assign and Subtraction: -=
- Assign and Multiplication: *=
- Assign and Division: /=
- Assign and Modulus: %=
```

```c
#include <stdio.h>

void main()
{
    int num;
    // assign
    num = 5;
    printf("%d \n", num);

    // assign and addition
    num += 5; // ==> num = num + 5;
    printf("%d \n", num);

    // assign and subtraction
    num -= 5; // ==> num = num - 5;
    printf("%d \n", num);

    // assign and multiplication
    num *= 2; // ==> num = num * 2;
    printf("%d \n", num);

    // assign and division
    num /= 2; // ==> num = num / 2;
    printf("%d \n", num);

    // assign and modulus
    num %= 2; // ==> num = num % 2;
    printf("%d \n", num);
}
```

### Relational Operators:

```
- Equal : ==
- Not Equal : !=
- Grater then: >
- Grater then or equal: >=
- Less than: <
- Less than or equal: <=
```

```c
#include <stdio.h>

void main()
{
    int num1, num2;
    num1 = 10;
    num2 = 13;
    // equal
    printf("%d \n", num1 == num2);

    // not equal
    printf("%d \n", num1 != num2);

    // grater then
    printf("%d \n", num1 > num2);

    // grater then or equal
    printf("%d \n", num1 >= num2);

    // less then
    printf("%d \n", num1 < num2);

    // les then or equal
    printf("%d \n", num1 <= num2);
}
```

### Logical Operators:

```
- Logical AND : &&
- Logical OR : ||
- Logical NOT: !

```

```c
#include <stdio.h>
#include <stdbool.h>

void main()
{
    bool isAdult, isMarried;
    isAdult = true;
    isMarried = false;
    // logical AND Operator
    printf("%d \n", isAdult && isMarried);

    // logical OR operator
    printf("%d \n", isAdult || isMarried);

    // logical NOT operator
    printf("%d \n", !isAdult);
}
```
