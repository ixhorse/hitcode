/*完数*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    int sum;
    int flag;
    while(scanf("%d", &n) != EOF){
        flag = 0;
        for(i=2; i<=n; i++){
            j = 1;
            sum = 0;
            while(j < i){
                if(i % j == 0){
                    sum += j;
                }
                j++;
            }
            if(sum == i){
                flag = 1;
                if(i == 6)
                    printf("6");
                else
                    printf(" %d", i);
            }
        }
        if(flag == 1)
            printf("\n");
    }
    return 0;
}
