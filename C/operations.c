#include <stdbool.h> // for bool, true, false

int main(void) {
    int a, b = 2, c = 3;

    a = b;      // assignment
    a = b + c;  // addition;
    a += 4;     // assignment with addition
    a++;        // post-increment
    ++a;        // pre-increment

    a = b - a;  // subtraction
    --b;        // pre-decrement
    c--;        // post-decrement
    a = -c;     // negation

    // more arithmetic operations (can also be combined with =, such as *=)
    a = b * c;  // multiplication
    a = b / c;  // division
    a = b % c;  // modulo (remainder)


    bool x  = true, y = false, z = true;
    // logical operations
    x = y && z;     // and
    x = y || z;     // or
    x = !y;         // not

    int foo = 0x01, bar = 0x04;
    // bitwise operations
    a = foo & bar;  // and
    a = foo | bar;  // or
    a = b ^ c;      // exclusive or
    a = ~b;         // bitwise not

    char *p;
    char baz = 'c';
    char hello[] = "hello world";
    // pointer operations
    p = &baz;       // reference
    p = hello;
    baz = *p;       // dereference
    baz = p[2];     // index
}