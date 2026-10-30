#include <stdio.h>

int main()
{
    //character array to hold the user's name
    char name[80];

    //prompt the user of their name
    printf("Please enter your name");

    gets(name);

    //Greet the user
    printf("\n Hello \"%s\" from C programming!", name);

    return 0;
}
