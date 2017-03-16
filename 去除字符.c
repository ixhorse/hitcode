/*去除字符*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100], c;
    char x[100];
    int i, j;
    while(scanf("%s", s) != EOF){
        getchar();
        scanf("%c", &c);
        j = 0;
        for(i=0; i<strlen(s); i++){
            if(s[i] != c){
                x[j] = s[i];
                j++;
            }
        }
        x[j] = '\0';
        printf("%s\n", x);
    }
    return 0;
}
