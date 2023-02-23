#include "main.h"
/**
 * print_triangle - a function that prints a triangle with #
 * @size: size of the triangle
 * Return: triangle of '#'
 */
void print_triangle(int size)
{
	int x, y, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y <= (size - 1); y++)
		{
			for (x = 0; x < (size - 1) - y; x++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= y; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
