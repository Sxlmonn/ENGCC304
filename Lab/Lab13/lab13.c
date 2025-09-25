#include <stdio.h>

void swapNumbers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;
    
    // รับค่าจากผู้ใช้
    printf("ป้อนตัวเลขแรก: ");
    scanf("%d", &num1);
    printf("ป้อนตัวเลขที่สอง: ");
    scanf("%d", &num2);
    
    // แสดงค่าก่อนสลับ
    printf("\nก่อนสลับ:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    // เรียกฟังก์ชันสลับค่า
    swapNumbers(ptr1, ptr2);
    
    // แสดงค่าหลังสลับ
    printf("หลังสลับ:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}