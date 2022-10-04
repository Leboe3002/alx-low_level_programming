#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] == ' ')
	{
			flag = 0;


