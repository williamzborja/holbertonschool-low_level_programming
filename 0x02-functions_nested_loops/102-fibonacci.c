#include <stdio.h>
/**
 * fibonacci_until - print fibonacci sequence
 * @until: number limit to print fibonacci
 */
void fibonacci_until(int until)
{
	int f, t1 = 1, t2 = 2;

	f = t1 + t2;
	printf("%d, %d, ", t1, t2);

	while (f <= until)
	{
		if (f != 34)
			printf("%d, ", f);
		else
			printf("%d\n", f);
		t1 = t2;
		t2 = f;
		f = t1 + t2;
	}
}
/**
 * main - print fibonacci sequence until
 * Return: (Sucess)
 */
int main(void)
{
	fibonacci_until(50);
	return (0);
}