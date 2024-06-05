//
// Created by Bhargab Acharya on 02/06/2024.
//





#include <stdlib.h>
#include <string.h>
#include "heap.c"

void calculate_freq(const char * input,int freq_map[128]) {

    for (int i = 0; i < 128; ++i) {
        freq_map[i]=0;
    }
    //calculate frequency
    for (int i = 0; input[i]!='\00'; ++i) {
        freq_map[input[i]]++;
    }
}


char * encode(char * str,int freq_map[128]){
    heapify(freq_map,strlen(freq_map));




}