//
// Created by Bhargab Acharya on 29/05/2024.
//

#include <printf.h>


typedef struct Person{
    int age;
    char * name;
} Person;

typedef unsigned age;

int main(){
    Person p1 = {
            34,"Bhargab"
    };
//    printf("%d",m);
//    printf("%s",(&p1)->name);
    printf("%d %d",sizeof (char ),sizeof (int ));


    printf("%c",*(p1.name));

    char * po = (char *)(&p1);
    printf(" \n%p\n %p\n %p\n %p\n",&p1,&p1.age,&p1.name,((char *)(po))+3);

    size_t name_offset = offsetof(Person, name);
    printf("%c", **((char **)(po + name_offset)));
//    printf("%p",po+8);
//    printf("%c",*((char*)(po+8)));
//    printf("%s",p1.name);

}