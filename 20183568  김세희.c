#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>

int main()

{

	struct statement

	{

		char name[12];

		int birthday;

		int gender;

		int phonenumber;



	};

	typedef struct statement a;

	a *strnumber;

	int n;

	scanf("%d", &n);

	printf("입력할 명세서의 수 : %d\n", n);

	strnumber = (int*)malloc(sizeof(a)*n);

	for (int i = 0; i < n; i++)

	{

		printf("정보를 입력하시오");

		scanf("%s %d %d %d", strnumber->name, strnumber[i].birthday, strnumber[i].gender, strnumber[i].phonenumber);

	}

	for (int j = 0; j < n; j++)

	{

		printf("%s ", strnumber->name);

		printf("%d ", strnumber[j].birthday);

		if (strnumber[j].gender == 0)

			printf("여자 ");

		else

			printf("남자 ");

		printf("010%d\n", strnumber[j].phonenumber);

	}

	return 0;

}