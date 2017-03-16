/*数字阶梯求和 */

#include <stdio.h>
#include <stdlib.h>
#define Length 110

int big_add(int *a, int alen, int *b, int blen);

int main()
{
    int a, n;
    int add[Length], result[Length];
    int i;
    int relen;
    while(scanf("%d %d", &a, &n) != EOF){
        for(i = 0; i<Length; i++){
            add[i] = a;
            result[i] = a;
        }
        relen = n;
        for(i=1; i<n; i++){
            relen = big_add(result, relen, add, n-i);
        }
        for(i=relen-1; i>=0; i--)
            printf("%d", result[i]);
        printf("\n");
    }
    return 0;
}

int big_add(int *a, int alen, int *b, int blen)
{
    int carry = 0;
    int temp;
    int i;
    if(alen > blen){
        for(i=0; i<blen; i++){
            temp = carry;
            carry = (a[i] + b[i] + temp) / 10;
            a[i] = (a[i] + b[i] + temp) % 10;
        }
        for(i=blen; i<alen; i++){
            temp = carry;
            carry = (a[i] + temp) / 10;
            a[i] = (a[i] + temp) % 10;
        }
        if(carry > 0){
            a[alen] = carry;
            return alen+1;
        }
        else
            return alen;
    }
    return alen;
}
