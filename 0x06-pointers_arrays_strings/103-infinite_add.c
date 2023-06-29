#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int m1 = 0, m2 = 0, xy, pq, d1, d2, sum = 0;

	while (*(n1 + m1) != '\0')
		m1++;
	while (*(n2 + m2) != '\0')
		m2++;
	if (m1 >= m2)
		pq = m1;
	else
		pq = m2;
	if (size_r <= pq + 1)
		return (0);
	r[pq + 1] = '\0';
	m1--, m2--, size_r--;
	d1 = *(n1 + m1) - 48, d2 = *(n2 + m2) - 48;
	while (pq >= 0)
	{
		xy = d1 + d2 + sum;
		if (xy >= 10)
			sum = xy / 10;
		else
			sum = 0;
		if (xy > 0)
		*(r + pq) = (xy % 10) + 48;
		else
			*(r + pq) = '0';
		if (m1 > 0)
			m1--, d1 = *(n1 + m1) - 48;
		else
			d1 = 0;
		if (m2 > 0)
			m2--, d2 = *(n2 + m2) - 48;
		else
			d2 = 0;
		pq--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
