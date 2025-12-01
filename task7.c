#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isPalindrome(char str[], int left, int right) {
    if(left >= right) {
        return 1; 
    }
    if(tolower(str[left]) != tolower(str[right])) {
        return 0; 
    }

    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    if(isPalindrome(str, 0, length - 1)) {
        printf("palindrome");
    } else {
        printf("not a palindrome");
    }

    return 0;
}


