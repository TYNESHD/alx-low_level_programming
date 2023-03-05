#include "main.h"
/**
 * A program that prints _putchar and a new line.
 *
 * This program demonstrates the use of the _putchar function to print
 * characters to the console. The program prints the character '_' followed by
 * the string "putchar" and a new line character '\n'.
 *
 * @return 0 on successful execution.
 */

#include <stdio.h>

/**
 * Prints a character to the console.
 *
 * This function writes a single character to the standard output stream using
 * the putchar function.
 *
 * @param c The character to print.
 *
 * @return The written character if successful, otherwise EOF.
 */
int _putchar(char c) {
    return putchar(c);
}

int main(void) {
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return 0;
}

