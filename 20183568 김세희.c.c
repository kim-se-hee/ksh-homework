#include <stdio.h>

int rfibo(int n);

int sfibo(int n);

int main()

{

	int n;

	scanf_s("%d", &n);

	for (; n <= 45;)

	{

		printf("%d\t", rfibo(n));

		n += 2;

		for (int j = 1; j <= 2; j++)

		{

			if (j == 1)

				printf("%d\n", sfibo(n));

			else

				sfibo(n);

		}

	}

	return 0;

}

int rfibo(int n)

{

	if (n == 1)

		return 0;

	else if (n == 2)

		return 1;

	else

		return rfibo(n - 2) + rfibo(n - 1);

}

int sfibo(int n)

{

	static int f1 = 0;

	static int f2 = 1;

	static int fib;

	fib = f1 + f2;

	f1 = f2, f2 = fib;

	return fib;

}

