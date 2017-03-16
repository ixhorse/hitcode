/*zhongshu*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    int i;
    int max, min, max_index, min_index;
    int array[20];
    while(scanf("%d", &n) != EOF){
        for(i=0; i<n; i++)
            scanf("%d", &array[i]);
        max = array[0]; max_index = 0;
        min = array[0]; min_index = 0;
        for(i=1; i<n; i++){
            if(array[i] > max){
                max = array[i];
                max_index = i;
            }
            if(array[i] < min){
                min = array[i];
                min_index = i;
            }
        }
        array[max_index] = min;
        array[min_index] = max;
        for(i=0; i<n; i++){
            if(i != n-1)
                printf("%d ", array[i]);
            else
                printf("%d\n", array[i]);
        }
    }
    return 0;
}
