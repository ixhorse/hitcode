/*三角形判定*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int temp;
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if(a > b){
            temp = b;
            b = a;
            a = temp;
        }
        if(b > c){
            temp = b;
            b = c;
            c = temp;
        }
        if(a*a + b*b >  c*c)
            printf("锐角三角形\n");
        else if(a*a + b*b ==  c*c)
            printf("直角三角形\n");
        else
            printf("钝角三角形\n");
    }
    return 0;
}
