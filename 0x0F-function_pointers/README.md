# C - Function Pointers

## TASK 0: What's my name

Write a function that prints a name.

**Prototype:** `void print_name(char *name, void (*f)(char *));`

## TASK 1: If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

**Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`

`size` is the size of the array, and `action` is a pointer to the function to be used.

## TASK 2: To hell with circumstances; I create opportunities

Write a function that searches for an integer.

**Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`

`size` is the number of elements in the array `array`, and `cmp` is a pointer to the function used to compare values.

`int_index` returns the index of the first element for which the `cmp` function does not return 0.

If no element matches, return -1. If `size` is less than or equal to 0, return -1.

## TASK 3: A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

**Usage:** `calc num1 operator num2`

You can assume `num1` and `num2` are integers. Use the `atoi` function to convert them from the string input to integers.

The `operator` is one of the following:
- `+`: addition
- `-`: subtraction
- `*`: multiplication
- `/`: division
- `%`: modulo

The program prints the result of the operation, followed by a new line.

You can assume that the result of all operations can be stored in an `int`.

If the number of arguments is wrong, print `Error`, followed by a new line, and exit with status `98`.

If the `operator` is none of the above, print `Error`, followed by a new line, and exit with status `99`.

If the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with status `100`.

### This task requires four different files:

**3-calc.h:** This file should contain all the function prototypes and data structures used by the program.

**3-op_functions.c:** This file should contain the following 5 functions (not more):

- `op_add`: Returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
- `op_sub`: Returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
- `op_mul`: Returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
- `op_div`: Returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
- `op_mod`: Returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`

**3-get_op_func.c:** This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

**Prototype:** `int (*get_op_func(char *s))(int, int);`
Where `s` is the operator passed as an argument to the program. This function returns a pointer to the function that corresponds to the operator given as a parameter. For example, `get_op_func("+")` should return a pointer to the function `op_add`. If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`.

**3-main.c:** This file should contain your main function only.

You are not allowed to code any other function than `main` in this file. You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div`, or `op_mod` from the `main` function. You have to use `atoi` to convert arguments to integers. You are not allowed to use any kind of loop. You are allowed to use a maximum of 3 if statements.

## TASK 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

Write a program that prints the opcodes of its own `main` function.

**Usage:** `./main number_of_bytes`

**Output format:**
- The opcodes should be printed in hexadecimal, lowercase.
- Each opcode is two chars long.
- Listing ends with a new line.

See example for clarification.

You are allowed to use `printf` and `atoi`.

You have to use `atoi` to convert the argument to an integer.

If the number of arguments is not correct, print `Error`, followed by a new line, and exit with status `1`.

If the number of bytes is negative, print `Error`, followed by a new line, and exit with status `2`.

You do not have to compile with any flags.
