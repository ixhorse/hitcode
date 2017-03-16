/*冒泡*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 201

int main()
{
    char string[length];
    int i, j;
    int n;
    char temp;
    while(scanf("%s", string) != EOF){
        n = strlen(string);
        for(i=0; i<n-1; i++){
            for(j=0; j<n-i-1; j++){
                if(string[j] > string[j+1]){
                    temp = string[j];
                    string[j] = string[j+1];
                    string[j+1] = temp;
                }
            }
        }
        printf("%s\n", string);
    }
    return 0;
}
