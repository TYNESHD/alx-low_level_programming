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

int main(void)
{
/**
 * _putchar - Writes the character 'c' to stdout
 *
 * @c: The character to print
 *
 * Return: On success, returns the character 'c' as an unsigned char
 *         cast to an int. On failure, returns EOF (-1).
 */	
putchar('_');
/**
 * main - Entry point for the program
 *
 * Return: Always returns 0, indicating success
 */
puts("putchar");
/* implementation code */
return (0);
}
