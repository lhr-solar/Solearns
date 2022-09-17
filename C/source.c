#include "header.h"     // this gives us access to the stuff we declared in header.h
#include <stdio.h>      // this lets us use printf


int main(void) {
    printf("%d\n", stringEquals(hello1, "hello"));      // we can call functions in other files because we have the prototype

    #include "stuff.h"      // #include is just a copy-paste (this is a just a demonstration, not good practice)

    // we can use macros like functions, but without type-safety
    // we can also use macros like constants
    int a = MIN(FOO, -2);
    float b = MIN(1.7, 2.5);

    #include "stuff.h"      // a file can also be included multiple times (not good practice)
    #include "stuff.h"

    return 0;
}

