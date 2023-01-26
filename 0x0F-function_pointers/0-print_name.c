#include "function_pointers.h"

/**
  * print_name - Print a name
  * @name: String of name
  * @f: Pointer to function that returns none and takes a string as an argument
  * Return: None
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
