/*百万富翁*/

#include <stdio.h>
#include <stdlib.h>
#define Time 30
#define length 100

int big_add(int a[], int alen, int b[], int blen);

int main()
{
    int a;
    int i, n;
    int day_money[length];
    int sum_money[length];
    int day_len, sum_len;
    printf("%d ", 10*Time);
    day_money[0] = 1;
    day_len = 1;
    sum_money[0] = 1;
    sum_len = 1;
    for(i=1; i<Time; i++){
        day_len = big_add(day_money, day_len, day_money, day_len);
        sum_len = big_add(day_money, day_len, sum_money, sum_len);
    }
    for(i=sum_len-1; i>=0; i--)
        printf("%d", sum_money[i]);
    printf("\n");
    return 0;
}

int big_add(int a[], int alen, int b[], int blen)
{
    int i;
    int carry = 0;
    int temp;
    if(alen <= blen){
        for(i=0; i<alen; i++){
            temp = carry;
            carry = (a[i] + b[i] + temp) / 10;
            b[i] = (a[i] + b[i] + temp) % 10;
        }
        for(i=alen; i<blen; i++)
        {
            temp = carry;
            carry = (b[i] + temp) / 10;
            b[i] = (b[i] + temp) % 10;
        }
        if(carry > 0){
            b[blen] = carry;
            blen++;
        }
    }
    return blen;
}
