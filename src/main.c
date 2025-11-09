#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char *name;
    char *func;
    int id;
    unsigned short int age;
    float salary;
    struct person *next;
} Person;

int main()
{
    printf("Project in progress.\n");
    
    return 0;
}