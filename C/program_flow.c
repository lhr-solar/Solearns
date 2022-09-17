#include <stdbool.h>
#include <stdio.h>

char hello1[] = "hello";

// find the maximum value in an array of integers
int findMax(int *arr, int len) {
    int max = arr[0];
    // run the inside of the loop for all value of i from 1 to (len - 1)
    for (int i = 1; i < len; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;     // return the maximum value we found
}

// determine if two null-terminated strings are equal
int stringEquals(char *s1, char *s2) {
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
    return result;
}


int main(void) {

    int nums[] = {2, 4, 1, 7, 4};               // we can declare an array like this
    char hello2[] = "hello";                    // we can decalre a string like this
    char letters[] = {'h', 'e', 'l', '\0'};     // we can also declare a string like an array

    // call the functions we defined above
    printf("%d\n", findMax(nums, 5));
    printf("%d\n", stringEquals(hello1, hello2));
    printf("%d\n", stringEquals(hello1, letters));

    return 0;
}