#ifndef _FILTER_H
#define _FILTER_H
/*
 * CS1050
 * Fall 2024
 * Lab 11 Starter File
 * by Jim Ries
 *
 **** DO NOT CHANGE THIS FILE ****
 */

// Symbolic Constants
#define S1 "1, 2, 3, 4 tell me that you love me more.  Sleepless long nights, that is what my youth was for."
#define S2 "\t99 dreams I have had.  In every 1 a red balloon."
#define S3 "And you'll start cryin' 96 tears."
#define S4 "Haven't felt right in a week\nAnd I'm thinning out\nAnd it hurts bad\nI gotta get back"
#define S5 "\tGrandbabies out beneath the willow tree\n\tHollering and laughing, and it sound like fun\n\tCan't pick 'em up, hug their necks anyway\n\tSorry honey Granddaddy's down with black lung\n\n"
#define S6 ""
#define S7 ""
#define S8 ""
#define STRINGCOUNT 5
#define MAXSTRINGLEN 512

////////////////
// Prototypes //
////////////////
char * Filter(char *s);

// Internal testing functions
char * JimRFilter(char *s);
char * JimRHonorsFilter(char *s);

#endif
