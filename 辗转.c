/*辗转相除*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Gcd(int a, int b);

int main()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	printf("%d\n", Gcd(a, b));

	return 0;
}

//int Gcd(int a, int b)
//{
//	int c;
//	while ((c = a % b) != 0) {
//		a = b;
//		b = c;
//	}
//	return b;
//}

int Gcd(int a, int b)
{
	if (a % b != 0)
		return Gcd(b, a%b);
	else
		return b;
}