/**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    int hash[10];
    int n, temp;
    int i;
    printf("Please enter the number:\n");
    while(scanf("%d", &number) != EOF){
        for(i=0; i<10; i++)
            hash[i] = 0;
        n = 0;
        temp = number;
        number = (int)fabs(number);
        do{
            n++;
            hash[number%10]++;
            number = number / 10;
        }while(number != 0);
        printf("%d: %d bits\n", temp, n);
        for(i=0; i<10; i++)
            if(hash[i] != 0)
                printf("%d:%d\n", i, hash[i]);
        printf("Please enter the number:\n");
    }
    return 0;
}
