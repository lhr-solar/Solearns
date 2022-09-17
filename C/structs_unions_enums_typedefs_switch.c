#include <stdint.h>
#include <string.h>
#include <stdio.h>

typedef float my_float32_t;

union Grade {
    uint32_t integer;
    my_float32_t percent;
    uint8_t bytes[4];
};

typedef enum year {
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR
} year_t;

struct student {
    year_t year;
    union Grade grade;
    char name[20];
};

int main(void) {
    struct student john;
    john.grade.percent = 95.0;
    john.year = FRESHMAN;
    strcpy(john.name, "John Smith");

    printf("%d\n", john.grade.integer);
    printf("%f\n", john.grade.percent);
    
    switch (john.year) {
        case FRESHMAN:
            printf("welcome\n");
            break;
        case SOPHOMORE:
            printf("hello\n");
            break;
        case JUNIOR:
        case SENIOR:
            printf("old!\n");
            break;
        default:
            printf("error!\n");
    }

    printf("%s\n", john.name);    
}
