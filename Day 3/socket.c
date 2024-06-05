//
// Created by Bhargab Acharya on 30/05/2024.
//
#include <netdb.h>
#include <printf.h>

int main(){

    struct hostent * host = gethostbyname("www.google.com");
    printf("%s\n",host->h_name);
    printf("%d\n",host->h_length);
    printf("%d\n",host->h_addrtype);


        printf("%s\n",host->h_addr_list[0]);




}