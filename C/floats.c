#include <stdio.h> // for printf

// floats can be single precision (32-bit) or double precision (64-bit)
float foo = 0.1F;
double bar;
float baz;

int main(void) {
    printf("%f\n", foo);

    bar = 100.0;
    bar /= 1000.0;

    printf("%lf\n", bar);

    if (foo != bar) {
        printf("%f != %lf\n", foo, bar);
    }

    baz = 100.0 / 1000.0;

    if (baz != bar) {
        printf("%f != %lf\n", baz, bar);
    }

    return 0;
}
