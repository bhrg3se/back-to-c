//
// Created by Bhargab Acharya on 29/05/2024.
//

#include <stdlib.h>
#include <printf.h>

char *create_array(unsigned int size, char c){
   char *arr = malloc(size);
    for (int i=0;i<size;i++){
        *(arr+i)=c;
    }
    *(arr+size-1) = '\00';
    return arr;
}



int main(int argn,char** argv){

    char * a = create_array(10,'D');
    printf("%s",a);

    return 0;
}
