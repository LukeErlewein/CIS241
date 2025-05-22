#include <stdio.h>
#include <ctype.h>
#include <string.h>

// This function will recursively test whatever text that has been put in and get rid of any spaces or punctuation.
int testPalindrome(char *str, int start, int end) {
    // if the beginning of the strings pointer is after the ends we know that we have covered the entire string and it can stop.
    if (start >= end) {
        return 1;
    }

    // Checks the current character if it is either a space or punctuation it will skip it.
    if (!isalnum(str[start])) {
        return testPalindrome(str, start + 1, end);
    }

    if (!isalnum(str[end])) {
        return testPalindrome(str, start, end - 1);
    }

    //checks if equal, if they are it will go on. if they arent we can end as they ar enot equal to each other.
    if (str[start] != str[end]) {
        return 0;
    }

    return testPalindrome(str, start + 1, end - 1);
}


int main() {
    char str[100];

    while(1){
        //gets the string, and then makes it lower case.
        fgets(str, sizeof(str), stdin);
        int length = strlen(str);
        strlwr(str);

        printf("%d\n", testPalindrome(str, 0, length - 1));
    }

    return 0;
}
