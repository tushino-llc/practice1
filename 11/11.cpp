#include <iostream>
#include <time.h>
#define N 5
void output(int a[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("a[%d;%d]= %d\t", i, j, a[i][j]);
		printf("\n");
	}
}
void key(int a[][N])
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			printf(" a[%d;%d]= ", i, j);
			scanf_s("%d", &a[i][j]);
		}


}
/*void rand(int a[][N])
{
	int A, B;
	srand(time(NULL));
	do
	{
		printf("������� ���������� [a,b] ");
		scanf_s("%d%d", &A, &B);
	} while (A > B);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			a[i][j] = rand() % (B - A + 1) + A;
	output(a);


}*/
void clean(int a[][N])
{
	for (int i = 0;i < N - 1;i++)
		for (int j = i + 1;j < N - i - 1;j++)
			a[i][j] = 0;
	output(a);
}
void main()
{
	setlocale(LC_ALL, "rus");
	int a[N][N];
	key(a);
	//rand(a);
	printf("\n"
		   "\n" );
	clean(a);
	system("pause");
}