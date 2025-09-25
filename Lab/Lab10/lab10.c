#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    
    printf("ป้อนคำ: ");
    scanf("%s", word);
    
    int len = strlen(word);
    int isPalindrome = 1; // สมมติว่าเป็น palindrome
    
    // ตรวจสอบตัวอักษรจากหน้าและหลัง
    for(int i = 0; i < len/2; i++) {
        if(word[i] != word[len-1-i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }
    
    return 0;
}