#include <stdbool.h>

// declare a string (character array)
char hello1[] = "hello";

// determine if two null-terminated strings are equal
bool stringEquals(char *s1, char *s2) {
    int i = 0;
    bool result = false;
    // check that each character in teh string is equal
    while (s1[i] == s2[i]) {
        ++i;
        // check to see if we are at the end of both strings
        if (s1[i] == '\0' && s2[i] == '\0') {
            result = true;
            break;
        }
    }
    return result;  // return the value held in the variable "result"
}
