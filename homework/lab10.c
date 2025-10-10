#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    int i, j, length;
    int isPalindrome = 1;
    
    printf("Enter word:\n");
    scanf("%s", word);
    
    length = strlen(word);
    
    // ตรวจสอบ palindrome โดยไม่สนใจตัวพิมพ์ใหญ่-เล็ก
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (tolower(word[i]) != tolower(word[j])) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
    
    return 0;
}