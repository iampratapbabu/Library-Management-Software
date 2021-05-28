#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//custom header files
#include "books.h"
#include "person.h"

int main()
{


    person();

    char choice,exit;
    for(;;)
    {
        printf("\n-------->MAIN MENU<--------\n");
        printf("1.Add Books\n");
        printf("2.View Books\n");
        printf("3.Delete Books\n");
        printf("4.Search Books\n");
        printf("5.Issue Books\n");
        printf("6.Return Books\n");
        printf("7.EXIT\n");

        fflush(stdin);
        choice=tolower(getchar());
       // printf(choice); for testing purpose

        switch(choice){
        case 'a':
            printf("Add Book function");
            addBook();
            break;
        case 'v':
            printf("View Book function");
            break;
        case 'd':
            printf("Delete Book function");
            break;
        case 's':
            printf("Search Book function");
            break;
        case 'i':
            printf("Issue Book function");
            break;
        case 'r':
            printf("Return Book function");

        }
        if(choice == 'e') break;
    }

    return 0;
}
