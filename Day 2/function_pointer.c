#include <printf.h>

//
// Created by Bhargab Acharya on 29/05/2024.
//
void print_name(char *name, void (*f)(char *)){
    f(name);
}

void print_name_as_is(char * n){
    printf(n);
}

int main(void)
{
    print_name("Danton", print_name_as_is);
//    print_name("Rick Harris", print_name_uppercase);
    printf("\n");
    return (0);
}