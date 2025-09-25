#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0, digits = 0;
    
    printf("ป้อนตัวเลข: ");
    scanf("%d", &num);
    
    original = num;
    
    for (int temp = num; temp != 0; temp /= 10) {
        digits++;
    }
    
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        int power = 1;
        
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
    }
    
    if (sum == num) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }
    
    return 0;
}