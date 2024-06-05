#include <stdio.h>
#include <malloc/_malloc.h>


char *_memset(char *s,char b,unsigned int n){
    for (int i=0;i<n;i++){
        *(s+i) = b;
    }
}

int main(int argn,char** argv){
    char * p = malloc(4*sizeof (char ));
    _memset(p,'A',6);
    *(p+2)='\00';
    printf("%p\n",(char)(*p));
    printf("0x%02x\n",(char)(p[0]));
    printf("%c\n",(char)(p[0]));
    return 0;
}