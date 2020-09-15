
/*
 *                                                  _____________ ___ 
 *   hello.c                                       / ___/ __/ __// _ \
 *                                                / /___\ \/__ \/ // /
 *   By: dhalley <dhalley@null.net>               \___/___/____/\___/ 
 *                                                                    
 */

#include <cs50.h>
#include <stdio.h>

int        main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
}