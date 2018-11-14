#include <stdio.h>

void indexaddmat(int mat1[3][3], int mat2[3][3]);

void ptrprodmat(int mat2[3][3], int mat[3][3]);

int main()

{

	int mat1[3][3];

	for (int i = 0; i <= 2; i++)

	{

		for (int j = 0; j <= 2; j++)

			scanf_s("%d", &mat1[i][j]);

	}

	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", mat1[0][0], mat1[0][1], mat1[0][2], mat1[1][0], mat1[1][1], mat1[1][2], mat1[2][0], mat1[2][1], mat1[2][2]);

	int mat2[3][3];

	for (int i = 0; i <= 2; i++)

	{

		for (int j = 0; j <= 2; j++)

			scanf_s("%d", &mat2[i][j]);

	}

	printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", mat2[0][0], mat2[0][1], mat2[0][2], mat2[1][0], mat2[1][1], mat2[1][2], mat2[2][0], mat2[2][1], mat2[2][2]);

	indexaddmat(mat1, mat2);

	ptrprodmat(mat1, mat2);

	return 0;

}

void ptrprodmat(int mat1[3][3], int mat2[3][3])

{



	for (int i = 0; i <= 2; i++)

	{

		for (int j = 0; j <= 2; j++)

		{

			if (j == 2)

				printf("%d\n", mat1[i][j] + mat2[i][j]);

			else

				printf("%d\t", mat1[i][j] + mat2[i][j]);

		}

	}

}

void indexaddmat(int mat1[3][3], int mat2[3][3])

{

	for (int i = 0; i <= 2; i++)

	{

		for (int j = 0; j <= 2; j++)

		{

			if (j == 2)

				printf("%d\n", (*(mat1[i]))*(*(mat2[0] + j)) + (*(mat1[i] + 1))*(*(mat2[1] + j)) + (*(mat1[i] + 2))*(*(mat2[2] + j)));

			else

				printf("%d\t", (*(mat1[i]))*(*(mat2[0] + j)) + (*(mat1[i] + 1))*(*(mat2[1] + j)) + (*(mat1[i] + 2))*(*(mat2[2] + j)));

		}

	}

}