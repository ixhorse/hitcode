/*整数逆序*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Reverse(int num);

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", Reverse(num));

    return 0;
}

int Reverse(int num)
{
    int sum = 0, a = (int)fabs(num);
    while(a % 10 != 0)
    {
        sum = sum * 10 + a % 10;
        a = a / 10;
        //printf("%d\n", sum);
    }

    return sum;
}
