//
// Created by Bhargab Acharya on 29/05/2024.
//


#include <printf.h>


#define MAX(x,y) x<y? y:x

int main(){
    printf("%s",__FILE__);
    printf("%d",MAX(9,5));
}