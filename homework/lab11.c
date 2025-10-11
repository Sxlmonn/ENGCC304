#include <stdio.h>
#include <math.h>

int main() {
    int number, original, remainder, digits = 0, result = 0;
    
    printf("Enter Number:\n");
    scanf("%d", &number);
    
    original = number;
    
    // นับจำนวนหลัก
    while (original != 0) {
        original /= 10;
        digits++;
    }
    
    original = number;
    
    // คำนวณผลรวมของเลขยกกำลัง
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    
    // ตรวจสอบว่าเป็น Armstrong หรือไม่
    if (result == number) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }
    
    return 0;
}