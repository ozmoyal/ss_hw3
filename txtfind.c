#include <stdio.h>
#include "txtfind.h"

int similar (char *s, char *t, int n) {
    int count = 0 , i = 0 , j = 0;
    while(i <= n) 
    {
        if(*(s+i) == *(t+i))
        {
            i++;
            j++;
        }
        else
        {
            removeChar(s,*(s+i));
        }
        printf("%c\n", *(s+i));
        printf("%c\n", *(t+i));
    }
}

void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}

int main() {
    char s[] = "hello";
    char t[] = "hell";
    similar(s,t,1);
}