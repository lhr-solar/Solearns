#include <stdio.h>

int foo = 0;
int bar = 19;
int baz[5] = {0, 10, 20, 30, 40};

int main(void) {
    int *a = &foo;
    int *b = a;

    printf("foo: %d\n", foo);

    *a = 42;

    printf("foo: %d\n", foo);

    printf("*b:  %d\n", *b);

    *a = 7;
    a = &bar;

    printf("foo: %d\n", foo);
    printf("*a:  %d\n", *a);

    a = baz;
    printf("%d\n", *(a + 2));
    printf("%d\n", *a + 2);
    printf("%d\n", a[2]);

    return 0;
}
