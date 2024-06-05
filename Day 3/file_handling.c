//
// Created by Bhargab Acharya on 30/05/2024.
//

#include <stdio.h>

int main(){
    FILE * f = fopen("somefile.txt","a+");
    fprintf(f,"Hello %s","Bhargab");
    fclose(f);
}