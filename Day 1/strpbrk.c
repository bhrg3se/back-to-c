//
// Created by Bhargab Acharya on 28/05/2024.
//

#include "stdio.h"
char *_strpbrk(char *s, char *accept){
    char current = *s;
    int i =0;
    int j = 0;
    int k = 0;
    unsigned found = 0;
    while (current != '\n'){
        if (current == *accept){
            char * current_accept = accept+j;
            while (*(current_accept) != '\n'){
                if (current != accept[j]){

                    if (k>0){
                        return current_accept;
                    }
                    j=0;
                    k=i;
                    break;
                }

                printf("%c : %c\n",current,*current_accept);
                j++;
                k++;
                current_accept = accept+j;
                current = *(s+k);
            }
            if (*(current_accept) == '\n'){
                return current_accept;
            }

        }
        i++;
        k++;
        current=s[i];
    }
    return 0;
}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("found %s in %p \n",f, t);
    putc('\00',stdout);

    printf("test %s \n", t);
    return (0);
}