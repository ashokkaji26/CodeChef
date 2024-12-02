#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    printf("%d", result);
    return 0;
}

/*
Your current selected option of -1 is correct for the given problem. 
The strcmp function compares the two strings "apple" and "banana". 
Since "apple" is lexicographically less than "banana", strcmp returns a negative value,
 and -1 is the correct choice among the given options.
 */