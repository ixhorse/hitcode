/*杨辉三角*/

#include <stdio.h>
#define N 20

void CaculateYH(int a[][N], int n);
void PrintYH(int a[][N], int n);

int main()
{
	int a[5][N];
	int n = 5;
	CaculateYH(a, n);
	PrintYH(a, n);

	return 0;
}

void CaculateYH(int a[][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i+1; j++) {
			if (j == 0 || j == i)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
}

void PrintYH(int a[][N], int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}