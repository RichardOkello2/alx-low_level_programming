#include <stdio.h>
/**
 * main - program that prints all possible combination
 * numbers must be seoerated by,
 * the two digits must be different
 * 012, 0120, 102, 021, 201, 210 arw one combi ation
 * Return: 0
 */
 int main(void)
 {
	 int n1 = 48;
	 int n2, n3;
	 in com = 44;

	 while (n1 <= 57)
	 {
		 n2 = n1 + 1;
		 while (n2 <= 57)
		 {
			 n3 = n2 + 1;
			 while (n3 <= 57)
			 {
				putchar(n1);
			       putchar(n2);
		       putchar(n3);
	if (n1 != 55 || n2 != 56 || n3 != 57)
	{
putchar(com);
putchar(32);
	}
	n3 += 1;
			 }
			 n2 += 1;
		 }
		 n1 += 1;
	 }
	 putchar('\n');
	 return (0);
 }
