//
// Created by Bhargab Acharya on 29/05/2024.
//

#include <printf.h>

int sum_them_all(int n, int i, ...){

    va_list list;
    va_start(list,n);

}

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);
    return (0);
}