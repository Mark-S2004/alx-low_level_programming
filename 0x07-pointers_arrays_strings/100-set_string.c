#include "main.h"

/**
  * set_string - Set the value of a pointer to a char
  * @s: Pointer to string
  * @to: String to copy to @s
  * Return: None
  */
void set_string(char **s, char *to)
{
	*s = to;
}
