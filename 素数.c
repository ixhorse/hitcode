/*素数判定*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i, flag;
    while(scanf("%d", &n) != EOF){
        flag = 0;
        if(n <= 0 || n == 1)
            printf("no\n");
        else{
            for(i = 2; i<n; i++){
                if(n % i == 0){
                    printf("no\n");
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                printf("yes\n");
        }
    }

    return 0;
}
