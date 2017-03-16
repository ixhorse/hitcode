/*zhongshu*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int hash[11];
    int input[20];
    int i, flag;
    int max, number;
    while(1)
    {
        flag = 0;
        for(i=0; i<20; i++)
            if(scanf("%d", &input[i]) == EOF){
                flag = 1;
                break;
            }
        if(flag == 1)
            break;
        for(i=1; i<11; i++)
            hash[i] = 0;
        for(i=0; i<20; i++)
            hash[input[i]] ++;

        max = 1; number = hash[1];
        for(i=2; i<11; i++){
            if(hash[i] > number){
                max = i;
                number = hash[i];
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
