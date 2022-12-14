#include <stdint.h> // for uintx_t/intx_t types
#include <stdio.h> // for printf

// This is a comment
/* This is also a comment */

// integers can be signed or unsigned
int foo;
unsigned int bar;

// integers can also be different sizes
char byte;      // This can also represent an ASCII character

// can also explicitly specify number of bits
uint8_t a = 200U;
int8_t b;

// we can have variables or constants
uint16_t c;
const int16_t d = 12;

uint32_t e;
int32_t f = 1000000;

uint64_t g;
int64_t h;

// all C programs start at main
int main(void) {
    int i;

    b = 2;      // set b to 2

    printf("%d\n", b);

    c = a + b;  // set c to the sum of a and b

    printf("%d\n", c);

    printf("%d\n", f);

    printf("%ld\n", h);

    printf("%d\n", i);

    return 0;
}
