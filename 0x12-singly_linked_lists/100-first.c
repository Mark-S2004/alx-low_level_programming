#include <stdio.h>

/**
  * print_first - Print a string before the execution of main function
  * Return: None
  */
void __attribute__((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
