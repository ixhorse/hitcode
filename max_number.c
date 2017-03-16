/*max number*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int max;
    int num[10];
    int i;
    while(1){
        for(i=0; i<10; i++){
            if(scanf("%d", &num[i]) == EOF)
                return 0;
        }
        max = num[0];
        for(i=1; i<10; i++){
            if(num[i] > max)
                max = num[i];
        }
        printf("max=%d\n", max);
    }
    return 0;
}
