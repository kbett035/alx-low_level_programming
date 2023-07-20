# Variadic Functions 📁

## Task 0: Beauty is Variable, Ugliness is Constant

In this task, you are required to implement a function that returns the sum of all its parameters. The function prototype is as follows:

```c
int sum_them_all(const unsigned int n, ...);
```

- `n`: The number of integers passed as parameters to the function.

If `n` is equal to 0, the function should return 0.

## Task 1: To Be is To Be the Value of a Variable

For this task, you need to create a function that prints numbers followed by a new line. The function prototype is as follows:

```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

- `separator`: The string to be printed between numbers. If `separator` is NULL, don't print it.
- `n`: The number of integers passed to the function.

You are allowed to use the `printf` function.

Print a new line at the end of your function.

## Task 2: One Woman's Constant is Another Woman's Variable

In this task, you will write a function that prints strings followed by a new line. The function prototype is as follows:

```c
void print_strings(const char *separator, const unsigned int n, ...);
```

- `separator`: The string to be printed between the strings. If `separator` is NULL, don't print it.
- `n`: The number of strings passed to the function.

You are allowed to use the `printf` function.

If one of the strings is NULL, print `(nil)` instead.

Print a new line at the end of your function.

## Task 3: To Be is a To Be the Value of a Variable

For this task, you will implement a function that prints any type of argument passed to it. The function prototype is as follows:

```c
void print_all(const char * const format, ...);
```

- `format`: A list of types of arguments passed to the function.
    - `c`: char
    - `i`: integer
    - `f`: float
    - `s`: char * (If the string is NULL, print `(nil)` instead)

Any other character in the `format` should be ignored.

You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`.

You can use a maximum of:
- 2 while loops
- 2 if statements

You can declare a maximum of 9 variables.

You are allowed to use the `printf` function.

Print a new line at the end of your function.

**Note**: The examples and specific implementation details are not provided here, but you should implement the functions according to the given prototypes and requirements.

Remember to thoroughly test your functions with different inputs to ensure their correctness and robustness.
