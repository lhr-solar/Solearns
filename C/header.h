#ifndef HEADER_H    // this header guard stops this file from being pasted in multiple times
#define HEADER_H

// macros can be like constants
#define FOO 42

// or like functions
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// we can put a function protoype here to expose the interface
int stringEquals(char *s1, char *s2);

// we can do the same for variables
extern char hello1[];

#endif              // this ends the header guard
