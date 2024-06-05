//
// Created by Bhargab Acharya on 02/06/2024.
//


typedef struct HashMap {
    char * heap;
} HashMap;



int hash(char * key, int size){
    int s =0;
    for (int i = 0;key[i]!='\00'; i++) {
        s+=key[i];
    }
    return s%size;
}

