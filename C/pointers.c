#include <stdio.h>

int foo = 0;
int bar = 19;
int baz[5] = {0, 10, 20, 30, 40};

int main(void) {
    int *a = &foo;                  // set a to the address of foo
    int *b = a;                     // set b equal to a

    printf("foo: %d\n", foo);       // print out foo

    *a = 42;                        // set the value pointed to (referenced) by a to 42

    printf("foo: %d\n", foo);       // print out foo

    printf("*b:  %d\n", *b);        // print out the value pointed to by b

    *a = 7;                         // set the value pointed to by a to 7
    a = &bar;                       // set a to the address of bar

    printf("foo: %d\n", foo);       // print foo
    printf("*a:  %d\n", *a);        // print the value referenced by a

    a = baz;                        // set a to point to baz

    // some pointer math
    // note the order of operations
    printf("%d\n", *(a + 2));
    printf("%d\n", *a + 2);
    printf("%d\n", a[2]);

    return 0;
}
