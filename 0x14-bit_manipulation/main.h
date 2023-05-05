#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * enum status_code_num - singly linked list
 * @n_one: as -1
 * @one: as 1
 * @two: as 2
 * @zero: as 0
 * @code_true: as 0
 * @code_false: points to false
 * @code_error: points to false
 * @code_success: points to true
 */
enum status_code_num
{
	n_one = -1,
	one = 1,
	two = 2,
	zero = 0,
	code_true = 1,
	code_false = 0,
	code_error = 1,
	code_success = 0
};

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
