#include <stdio.h>
#include <stdlib.h>
#include "Head.h"

int main ()
{
    char fn[100];

    //Prompt from stdin for a users name
    printf(PROMPT_MSG);
    scanf_s("%s", fn, 100);

    //Print the users name using stdout
    printf("\nHello %s! Are you ready to start?", fn);

    return(0);
}