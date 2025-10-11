#include <stdio.h>

// ฟังก์ชันสำหรับสลับตัวเลขโดยใช้พอยน์เตอร์
void swapNumbers(int *ptr1, int *ptr2) {
    // สลับค่าโดยไม่ใช้ตัวแปรพัก
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    
    // รับค่าจากผู้ใช้
    printf("Enter num1 :\n");
    scanf("%d", &num1);
    printf("Enter num2 :\n");
    scanf("%d", &num2);
    
    // กำหนดที่อยู่ให้พอยน์เตอร์
    ptr1 = &num1;
    ptr2 = &num2;
    
    // แสดงค่าก่อนสลับ
    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);
    
    // เรียกใช้ฟังก์ชันสลับค่า
    swapNumbers(ptr1, ptr2);
    
    // แสดงค่าหลังสลับ
    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);
    
    return 0;
}