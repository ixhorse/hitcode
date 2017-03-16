/*矩阵乘积*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3], b[3][2];
    int c[2][2];
    int i, j, k;
    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);
    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
            scanf("%d", &b[i][j]);
    for(i=0; i<2; i++)
        for(j=0; j<2; j++){
            c[i][j] = 0;
        }
    for(i=0; i<2; i++)
        for(j=0; j<2; j++){
            for(k=0; k<3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if(j != 1)
                printf("%d ", c[i][j]);
            else
                printf("%d", c[i][j]);
        }
        if(i == 0)
            printf("\n");
    }
    return 0;
}
