/*
 * CS1050
 * Fall 2024
 * Lab 11 Starter File
 * by Jim Ries
 *
 **** DO NOT CHANGE THIS FILE ****
 */

// includes
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "filter.h"

typedef char * (*JIMRFUNCTION)(char *);

// Main
int main(void)
{
    JIMRFUNCTION compfunc;

#ifdef HONORS
    compfunc = JimRHonorsFilter;
#else
    compfunc = JimRFilter;
#endif

    char s[][MAXSTRINGLEN] =
    {
        S1,S2,S3,S4,S5,S6,S7,S8,
    };

    const char * const sOrigPointers[] =
    {
        s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],
    };

    // You could put your own debugging stuff in your code
    // and bracket it with #ifdef DEBUG like this.  You can
    // then build with DEBUG: make debug    or    make honorsdebug
    #ifdef DEBUG
    printf("***DEBUGGING TURNED ON ***\n");
    #endif

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings after filtering ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        char * golden = compfunc(s[i]);
        char * temp = Filter(s[i]);
        if (sOrigPointers[i]!=temp)
        {
            printf("\t* Warning: new storage used for string %d\n",i);
        }

        if (0!=strcmp(temp,golden))
        {
            printf("\t* Warning: your result is not the same as JimR's for string %d\n",i);
        }

        printf("#%d: %s\n",i,temp);
    }

}
