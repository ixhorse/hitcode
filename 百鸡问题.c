/*百鸡*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n; //money
    int x , y, z;
    while(scanf("%d", &n) != EOF){
        x = 0;
        while(x * 5 <= n){
            y = 0;
            while(x*5 + y*3 <= n){
                z = 0;
                while(x*5 + y*3 + z/3.0 <= n){
                    if(x + y + z == 100){
                        printf("x=%d,y=%d,z=%d\n", x, y, z);
                    }//if
                    z++;
                }//while
                y++;
            }//
            x++;
        }//
    }
    return 0;
}
