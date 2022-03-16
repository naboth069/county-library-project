/*
   County Library System
    By Naboth Akoyo
    10th march 2022
    MIT license
    C99 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

void execute_action(int action);

struct Patron{
    char name[100];
    char email[50];
    char password [30];
    int is_staff;
};

struct Resources{
    char title[100];
    char subject[100];
    char author[100];
    char edition[30];
    int is_book;
};

void add_patron()
{
    struct Patron patron;
    printf("Enter Name: ");
    getchar();
    gets(patron.name);
    printf("Enter Your Email: ");
    gets(patron.email);
    printf("Enter Initial Password: ");
    gets(patron.password);
    printf("Enter 1 If Staff 0 Otherwise: ");
    scanf("%d", &patron.is_staff);
    printf("Patron %s Successfully Added To The System\n", patron.name);


}

void add_resources()
{
    struct Resources resources;
    printf("Enter Book Title : ");
    getchar();
    gets(resources.title);
    printf("Enter Subject : ");
    gets(resources.subject);
    printf("Enter Book Author: ");
    gets(resources.author);
    printf("Enter Book Edition: ");
    gets(resources.edition);
    printf("Enter 1 If Book 0 Otherwise: ");
    scanf("%d", &resources.is_book);
    printf("Resources %s Successfully Added To The System\n", resources.title);
}
