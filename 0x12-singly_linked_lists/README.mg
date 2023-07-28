# Singly Linked Lists

This repository contains C implementations for singly linked lists and related functions. Below are the details of the files and functions included in the project:

## Tests ✔️
* **Tests:** This directory is for test purposes.

## Header File 📁
* **lists.h:** This header file contains definitions and prototypes for all types and functions used in the project.

Type/File | Definition/Prototype
--- | ---
`struct list_s` | `char *str`, `unsigned int len`, `struct list_s *next`
`typedef list_t` | `struct list_s`

## Functions

### 0. Print List
* **File:** 0-print_list.c
* **Function Signature:** `size_t print_list(const list_t *h);`
* **Description:** This C function prints all the elements of a `list_t` list. If `str` is NULL, the function prints `[0] (nil)`.

### 1. List Length
* **File:** 1-list_len.c
* **Function Signature:** `size_t list_len(const list_t *h);`
* **Description:** This C function returns the number of elements in a linked `list_t` list.

### 2. Add Node
* **File:** 2-add_node.c
* **Function Signature:** `list_t *add_node(list_t **head, const char *str);`
* **Description:** This C function adds a new node at the beginning of a `list_t` list. If the function fails, it returns NULL; otherwise, it returns the address of the new element.

### 3. Add Node at the End
* **File:** 3-add_node_end.c
* **Function Signature:** `list_t *add_node_end(list_t **head, const char *str);`
* **Description:** This C function adds a new node at the end of a linked `list_t` list. If the function fails, it returns NULL; otherwise, it returns the address of the new element.

### 4. Free List
* **File:** 4-free_list.c
* **Function Signature:** `void free_list(list_t *head);`
* **Description:** This C function frees a `list_t` list.

### 5. The Hare and the Tortoise
* **File:** 100-first.c
* **Description:** This C function prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the `main` function is executed.

### 6. Real Programmers Can Write Assembly Code in Any Language
* **File:** 101-hello_holberton.asm
* **Description:** This is a 64-bit assembly program that prints "Hello, Holberton" followed by a new line using only the `printf` function without interrupts.
